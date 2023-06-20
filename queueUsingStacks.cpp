class MyQueue {
public:
stack<int>s1;
stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.size()){
            int n = s2.top();
            s2.pop();
            return n;
        }
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
            int n = s2.top();
            s2.pop();
            return n;
    }
    
    int peek() {
        if(s2.size()){
            return s2.top();
        }
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        return s2.top();
    }
    
    bool empty() {
        if(s1.size()==0 && s2.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */