class Solution {
public:
      int dp[2501][2501];
       

       int solve (vector<int>& nums , int i , int p , int n){

        if(i >= n ) return 0;

        if(p!= -1 && dp[i][p] != -1){
            return dp[i][p];
        }

        int take =0;
        if(p == -1 || nums[i] > nums[p]){
            take = 1 + solve(nums , i+1,i,n);
        }
        int nottake = solve(nums,i+1 , p , n);
         
        if(p!= -1)
          dp[i][p] =  max(take,nottake);
         
         return max(take,nottake);
       }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        

        return solve(nums , 0,-1 , n);
        
    }
};