class Solution {
public:
    int maxOperations(string s) {
        int  oneseen = 0;
        int  i = 0;
        int  n = s.length();
        int res = 0 ;
        
        while(i<n){
            if(s[i] == '0'){
                res += oneseen;
                while( i  < n && s[i] == '0'){
                    i++;
                }
            }
            else{
                oneseen++;
                i++;
            }



     
      
        }

      return res;
    }
};