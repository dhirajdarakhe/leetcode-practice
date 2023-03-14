class MinStack {
    stack<long long> st;
    long long  mini = INT_MIN;
public:
    MinStack() {
        while(!st.empty()) st.pop();
        mini = 0;
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            mini = val;
        }
        else
        {
            if(mini > val)
            {  
                long long x = 2ll*val*1ll-mini;
                st.push(x);
                mini = val;
            }
            else
            {
                st.push(val);
            }
        }
        
    }
    
    void pop() {
     
        if(st.top() < mini)
        {
            mini = 2ll*mini*1ll - st.top();
        }
      st.pop();
        
    }
    
    int top() {
        if(st.top() < mini) return mini;
        return st.top();
    }
    
    int getMin() {
        return mini;
        
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