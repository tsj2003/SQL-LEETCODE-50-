class Solution {
public:
int t[46];
    int  solve(int  i , int n ){
        if(i == n) return 1;
        if(i>n) return 0 ;

        if(t[i] != -1) return t[i];
        
        int jump1 = solve(i+1 , n) ;
        int jump2 = solve(i+2 , n);

        return t[i] = jump1 + jump2;

    }
    int climbStairs(int n) {

        memset(t , -1,sizeof(t));
        int ans = solve( 0 , n);
        return ans;
    }
};