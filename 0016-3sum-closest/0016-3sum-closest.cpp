class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = nums[0] + nums[1] + nums[2];
        sort(nums.begin() , nums.end());
       for(int  i = 0; i <  nums.size() - 2; i++ ){
        int j = i + 1;
        int k  = nums.size() - 1;
        while( j  < k ){
            int sum  = nums[i] + nums[j] + nums[k];

            if(abs(target  - sum ) < abs(target - ans)){
                ans = sum;
                //j++;
                //k--;

            }
            else if (target ==  sum ){
                return  sum;
            }
            else if (target < sum){
                k--;
            }
            else{
                j++;
            }
            

        }
       }
        return ans;
    }
};