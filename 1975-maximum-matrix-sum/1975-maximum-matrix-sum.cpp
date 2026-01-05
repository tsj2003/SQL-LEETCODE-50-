class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

    long long sum =0;
    int  minabs = INT_MAX;
    long long noofneg = 0;
    
    for(int  i = 0 ; i<matrix.size();i++ ){
        for(int j =0; j<matrix.size();j++){
            sum += abs(matrix[i][j]);

            minabs = min(minabs , abs(matrix[i][j]));

            if(matrix[i][j] < 0){
                noofneg++;
            }
            
            }

      

        }
        if(noofneg % 2 == 0 ){
                return sum;


    }
    return sum - 2*minabs;

        
    }
};