class MinStack {
private:
    std::stack<int> values;
    std::stack<int> minValues;
public:
    MinStack() {
        minValues.push(INT_MAX);
    }
    
    void push(int val) {
        values.push(val);
        if (val <= minValues.top()) minValues.push(val);
    }
    
    void pop() {
        if (values.top() == minValues.top()){
            values.pop();
            minValues.pop();
        }
        else values.pop();

    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return minValues.top();
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