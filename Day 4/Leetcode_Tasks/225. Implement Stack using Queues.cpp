class MyStack {
private:
    queue<int> first;
    queue<int> sec;        
public:
    /** Initialize your data structure here. */
    
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        first.push(x);
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        
        int x;
        while(!first.empty())
        {
            if(first.size() == 1)
                x = first.front();
            else
                sec.push(first.front());
            first.pop();
        }
        
        sec.swap(first);
        return x;
    }
    
    /** Get the top element. */
    int top() {
        int x;
        while(!first.empty())
        {
            if(first.size() == 1)
                x = first.front();
            
            sec.push(first.front());
            first.pop();
        }  
        
        sec.swap(first);
        return x;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
         return (first.empty() && sec.empty());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */