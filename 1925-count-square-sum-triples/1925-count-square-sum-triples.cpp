class Solution {
public:
int cnt = 0 ; 
    int countTriples(int n) {
    for(int  i = 1 ; i <= n;i++){
       for(int j = i+1;j<=n;j++){
          int s  = i*i + j*j;
          int k = sqrt(s);
          if(k*k == s && k<=n){
            cnt+=2;
          }
       }
    }


        return cnt;
    }
};