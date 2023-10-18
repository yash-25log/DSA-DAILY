class MinStack {
public:
    stack<int>st, mst;
    MinStack() {

    }
    
    void push(int val) {
        if(mst.empty() || val <= mst.top())mst.push(val);
        st.push(val);
    }
    
    void pop() {
        if(st.top() == mst.top())mst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
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