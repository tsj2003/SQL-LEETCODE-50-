class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size();

        int curr = 0 ; 
        int prev = 0 ;
        long long res = 0 ; 
        for(int  i = 0 ; i < n ; i++){

            curr = target[i];

            if(abs(curr)  > abs(prev)){
                res +=(curr  - prev);

            }
            else if ((curr > 0 && prev<0) || (curr <0 && prev >0)){
                res += abs(curr);
            }
            prev = curr; 
        }


        return res;
        
    }
};