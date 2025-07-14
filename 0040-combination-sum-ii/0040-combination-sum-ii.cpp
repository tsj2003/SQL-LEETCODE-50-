class Solution {
public:
 void solve(int sum ,vector<int>& temp,vector<int>& candidates,vector<vector<int>>&result ,int target){ 
         if (target <0){
            return;
         }
         if(target == 0){

          result.push_back(temp);
         }
         for(int i = sum ; i<candidates.size();i++){

            if(i> sum && candidates[i] == candidates[i -1] ){

                continue;
            }
            temp.push_back(candidates[i]);

            solve(i+ 1 , temp ,candidates, result ,target - candidates[i] );
            temp.pop_back();
         }

       }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> result;
         sort(candidates.begin(), candidates.end());

         vector<int> temp;

         solve(0,temp,candidates ,result, target);

          return result;

    }
};