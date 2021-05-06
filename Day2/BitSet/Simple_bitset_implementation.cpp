#include <iostream>
#include <stdio.h>
#include <assert.h>
#include <climits>
using namespace std;

template<size_t n>
class BitSet {
   private:
       static const unsigned int IntBits = CHAR_BIT * sizeof(int);
       int cntr[n];

  public:
    BitSet();
    void set(unsigned int);
    void reset(unsigned int);
    void flip(unsigned int);
    int test(unsigned int);
  public:
  	BitSet<n>& operator&=(const BitSet<n>& rhs);
  	BitSet<n>& operator|=(const BitSet<n>& rhs);

    };


template<size_t n>
BitSet<n>::BitSet()
: cntr() {}

template<size_t n>
void BitSet<n>::set(unsigned int k) {
  cntr[k/IntBits] |= (1U << (k%IntBits));
}

template<size_t n>
void BitSet<n>::reset(unsigned int k) {
  cntr[k/IntBits] &= ~(1U << (k%IntBits));
}

template<size_t n>
int BitSet<n>::test(unsigned int k){
  return ( (cntr[k/IntBits] & (1U<<(k%IntBits))) != 0 );
}

template<size_t n>
void BitSet<n>::flip(unsigned int k) {
  cntr[k/IntBits] ^= (1U <<(k%IntBits));
}

template<size_t n>
BitSet<n>& BitSet<n>::operator&=(const BitSet<n>& rhs){

	for(int elem = 0;elem <= this.cntr.size();++elem){
		this.cntr[i] &= rhs.cntr[i];
	}

	return *this;
}

template<size_t n>
BitSet<n>& BitSet<n>::operator|=(const BitSet<n>& rhs){

	for(int elem = 0;elem <= this.cntr.size();++elem){
		this.cntr[i] |= rhs.cntr[i];
	}

	return *this;
}


int main() {
  BitSet<10u> bs;
  BitSet<10u> bs1;
  bs.set(100);
  bs1.set(100);
  assert(bs.test(100)>=1);
  bs.reset(100);
  assert(bs.test(100)==0);
  bs.flip(100);
  assert(bs.test(100)>=1);
}
