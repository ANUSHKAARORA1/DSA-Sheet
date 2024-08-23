155. Min Stack
class MinStack {
public:
stack<int>s1,s2;
    MinStack() {
        
    }
    
    void push(int val) {
        //all elements are present in s1 but the elements with min value is present in s2 and s2 top will be the min eleemnt 
        s1.push(val);
        // always check s2.empty() then check if 
        if(s2.empty() || val<=s2.top()){
            s2.push(val);
        }
    }
    
    void pop() {
        if(s1.top()==s2.top()){
            s2.pop();
    }
    s1.pop();
    }
    
    int top() {
      return  s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
