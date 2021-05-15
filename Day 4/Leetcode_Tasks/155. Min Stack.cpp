class MinStack {
private:
    vector<int> vec;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
       return vec.back();
    }
    
    int getMin() {
        int min = vec[0];
        for(int i=1;i<vec.size();++i)
            if(vec[i]<min)
                min = vec[i];
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */