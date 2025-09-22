class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       int maxi = INT_MIN;
       int total = 0;
       int n = nums.size();
       unordered_map<int , int> mp;
       for(auto it: nums){
         total = ++mp[it];
        maxi = max(maxi,total);
       }
      int res = 0;
        for (auto &p : mp) {
            if (p.second == maxi) {
                res += p.second;
            }
        }

        return res;
    }
};