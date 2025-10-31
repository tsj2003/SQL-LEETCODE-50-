class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int , int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto p: mp){
         if(p.second >1){
            ans.push_back(p.first);
        }
        }
        
        return ans;
    }
    
};