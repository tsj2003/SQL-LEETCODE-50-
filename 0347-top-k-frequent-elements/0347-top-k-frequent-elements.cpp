class Solution {
public:
    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        
        // Count frequencies
        for(int num : nums){
            mp[num]++;
        } // Fixed: Added missing closing brace
        
        // Min heap to keep top k frequent elements
        priority_queue<p, vector<p>, greater<p>> pq;
        
        for(auto& it : mp){
            int val = it.first;
            int freq = it.second;
            
            pq.push({freq, val});
            
            if(pq.size() > k){
                pq.pop();
            }
        } // Fixed: Moved the result processing outside this loop
        
        // Extract results
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    } // Fixed: Added missing closing brace
};