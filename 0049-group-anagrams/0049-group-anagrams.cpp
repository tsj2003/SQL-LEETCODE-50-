class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        int n = strs.size();

        for(int i =0 ; i<n;i++){
            string temp = strs[i];
            sort(begin(temp) , end(temp));
            mp[temp].push_back(strs[i]);


        }
       for(auto it:mp){
        res.push_back(it.second);
       }
     return res;
    }
};