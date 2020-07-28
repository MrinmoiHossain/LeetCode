class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> v;
    vector<int> mv;
    
    MinStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
        
        if(mv.size() == 0)
            mv.push_back(x);
        else
            mv.push_back(min(mv.back(), x));
    }
    
    void pop() {
        v.pop_back();
        mv.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return mv.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */