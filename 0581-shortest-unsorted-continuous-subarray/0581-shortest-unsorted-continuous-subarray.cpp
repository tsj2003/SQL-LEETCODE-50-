class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted;
        for(auto it : nums) {
            sorted.push_back(it);
        }
        sort(sorted.begin() , sorted.end());

        int n  = nums.size();
        int a = -1;
        int b = -1;
        if(n==1) return 0;
        if(n ==2 ){
            if(nums[0] > nums[1]) return 2;
            else return 0;
        } 

        for(int i = 0 ; i < n ;i++){
            if(nums[i] != sorted[i]){
                a = i;
                break;
            }

            
        }
        for(int i = n-1 ; i >=0 ; i--){

            if(nums[i] != sorted[i]){
                b = i;
                break;
            }
        }
        // for(int i = 0 ;i<n-2;i++){
        //   if(nums[i]< nums[i+1] && nums[i+1] > nums[i+2]){
        //     if(a == -1) a = i+1;
        //     else b = i+2;

        //   }

        // }
        if(b == -1){
            if(a==-1) return 0 ;
            else return 2;
        }
        return b-a+1;

    




    }
};