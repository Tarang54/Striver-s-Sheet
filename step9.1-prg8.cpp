class MinStack {
    stack <pair<int, int>> s;
public:
    MinStack() {
    }
    void push(int val) {
        int mini;
        if(s.empty()){
            mini = val;
        }
        else{
            mini = min(s.top().second,val);
        }
        s.push({val,mini});
    }
    
    void pop() {
        if(s.empty()){
            return;
        }
        else{
            s.pop();
        }
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
