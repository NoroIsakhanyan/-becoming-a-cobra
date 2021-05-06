#include <iostream>

using std::swap;

class GapBuffer {
  private:
    char* start_ptr;
    char* cursor_ptr;
    char* gap_end_ptr;
    char* end_ptr;
    std::size_t capacity;

  private:
    void updateCapacity() {
      if(cursor_ptr == gap_end_ptr) {
        capacity *= 2;
        char* tmp_ptr = new char[capacity];
        std::copy(start_ptr, cursor_ptr, tmp_ptr);
        std::copy(gap_end_ptr, end_ptr, tmp_ptr + capacity - (end_ptr - gap_end_ptr)); 
        cursor_ptr = tmp_ptr + (cursor_ptr - start_ptr);
        gap_end_ptr = tmp_ptr + capacity - (end_ptr - gap_end_ptr);
        end_ptr = tmp_ptr + capacity;
        delete[] start_ptr;
        start_ptr = tmp_ptr;
      }
    }

  public:
    GapBuffer(std::size_t aInitialCapacity = 256) {
      capacity = aInitialCapacity;
      start_ptr = new char[capacity];
      cursor_ptr = start_ptr;
      end_ptr = start_ptr + capacity;
      gap_end_ptr = end_ptr;
    }

   
    GapBuffer(const GapBuffer& rhs) {
      capacity = rhs.capacity;
      start_ptr = new char[capacity];
      std::copy(rhs.start_ptr, rhs.end_ptr, start_ptr);
      cursor_ptr = start_ptr + (rhs.cursor_ptr - rhs.start_ptr);
      end_ptr = start_ptr + capacity;
      gap_end_ptr = start_ptr + (rhs.gep_end_ptr - rhs.start_ptr);
    }

    friend void swap(GapBuffer& lhs, GapBuffer& rhs) {
      
	      swap(lhs.capacity, rhs.capacity);
		      	swap(lhs.start_ptr, rhs.start_ptr);
		      		swap(lhs.cursor_ptr, rhs.cursor_ptr);
		      	swap(lhs.end_ptr, rhs.end_ptr);
	      swap(lhs.gap_end_ptr, rhs.gap_end_ptr);
    }

    GapBuffer& operator=(GapBuffer& rhs) {
    	if(this == &rhs){
    		return this*;
    	}else{
     		 swap(*this, rhs);
 		 }
      return *this;
    }
    
    void insert(char c) {
      (*cursor_ptr++) = c;
      updateCapacity();
    }
    
    void removeLastChar() {
      --cursor_ptr; 
    }
  
    void moveCursor(std::ptrdiff_t aOffset = 1) {
      if(aOffset > 0) {
        
        std::copy(gap_end_ptr, gap_end_ptr + aOffset, cursor_ptr);
        gap_end_ptr += aOffset;
        cursor_ptr += aOffset;
      } else if(aOffset < 0) {
       
        std::copy(cursor_ptr + aOffset, cursor_ptr, gap_end_ptr + aOffset);
        gap_end_ptr += aOffset;
        cursor_ptr += aOffset;
      }
    }

     ~GapBuffer() {
      delete[] start_ptr;
    }


};