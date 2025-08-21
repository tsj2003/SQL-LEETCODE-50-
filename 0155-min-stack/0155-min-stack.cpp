class MinStack {
public:
  stack<long long > st;
  long long mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini = val;
        }
        else{

            if(val < mini){
                st.push( 2LL*val - mini);
                mini = val;
            }
            else{
                st.push(val);

            
            
            }

        }
    }
    
    void pop() {
        if(st.empty()) return;

         long long curr = st.top();
        st.pop();

        if(curr<mini){

           mini = 2LL*mini - curr;
        }

        
    }
    
    int top() {
         long long curr = st.top();
        if(curr < mini) {
            // Encoded value, so actual top is mini
            return mini;
        }
        return curr;  // normal case
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