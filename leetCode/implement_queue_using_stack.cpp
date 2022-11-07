class MyQueue {
    stack<int> input;
    stack<int> result;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(!result.empty()) {
            int x = result.top();
            result.pop();
            return x;
        } else {
            while(!input.empty()) {
                result.push(input.top());
                input.pop();
            }
            int x = result.top();
            result.pop();
            return x;
        }
    }
    
    int peek() {
        if(!result.empty()) {
            return result.top();
        } else {
            while(!input.empty()) {
                result.push(input.top());
                input.pop();
            }
            return result.top();
        }
    }
    
    bool empty() {
        return input.empty() && result.empty();
    }
};
