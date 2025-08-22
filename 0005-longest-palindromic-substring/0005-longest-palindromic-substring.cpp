class Solution {
public:
    int t[1001][1001];
   bool palindrom(string& s , int l,int r){


       if(l>=r){
        return 1;
       }
       if(t[l][r] != -1){
        return t[l][r];
       }
      if( s[l] == s[r])

       return t[l][r] =  palindrom(s,l+1 , r-1);

        return t[l][r] =  0;

      
      

   }
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = INT_MIN;
        int sp =0;
        memset(t,-1,sizeof(t));

        for(int i =0 ; i<n;i++){
            for(int j = i ; j<n;j++){

                if(palindrom(s,i,j)==true){
                    if(j-i+1 > maxlen){
                    maxlen = j-i+1;
                    sp = i;
                    }

                }
            }
        }
        return s.substr(sp , maxlen);


    }
};