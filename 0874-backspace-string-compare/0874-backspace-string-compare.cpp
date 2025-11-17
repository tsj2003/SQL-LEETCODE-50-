class Solution {
public:
    bool backspaceCompare(string s, string t) {
    int si  = s.length();
    int ti =  t.length();
    stack<char> st1 ; 
    stack<char> st2 ;

    for(int  i = 0 ; i < si;i++){
       if(s[i] == '#'){
        if (!st1.empty()) st1.pop();
       } 
       else st1.push(s[i]);
        
    }
    for(int  j = 0 ; j < ti;j++){
       if(t[j] == '#'){
        if (!st2.empty()) st2.pop();
       } 
       else st2.push(t[j]);
        
    }
    if (st1.size() != st2.size()) return false;
    while(st1.size() != 0 && st2.size() !=0){
        if(st1.top() != st2.top()){

            return false;
            
        }
        st1.pop();
        st2.pop();
    }
    return true;

        
    }
};