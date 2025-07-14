class Solution {
public:
    vector<vector<int>> result;

    void solve(int start, vector<int>& candidates, int target, vector<int>& temp) {
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        if (start >= candidates.size() || target < 0) return;

       
        temp.push_back(candidates[start]);
        solve(start , candidates, target - candidates[start], temp);
        temp.pop_back(); // BACKTRACK

        // DO NOT PICK the current element (move to next index)
        solve(start + 1, candidates, target, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        solve(0, candidates, target, temp);
        return result;
    }
};