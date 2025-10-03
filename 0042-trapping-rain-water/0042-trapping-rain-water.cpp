class Solution {
public:
vector<int> getleftmax(vector<int>& height ,  int n){
    vector<int> leftans(n);
    leftans[0] = height[0];
    for(int  i = 1 ; i<n;i++){

        leftans[i] = max(leftans[i-1] , height[i]);
    }
    return leftans;

}

vector<int> getrightmax(vector<int>& height ,  int n){
      vector<int> rightans(n);
    rightans[n-1] = height[n-1];
    for(int  i = n-2 ; i>=0;i--){
        

        rightans[i] = max(rightans[i+1] , height[i]);
    }
    return rightans;

}


    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> left_max = getleftmax(height , n);
         vector<int> right_max = getrightmax(height , n);
         int sum = 0;
         for(int i =0;i<n;i++){

                  int water =  min(left_max[i] , right_max[i]) - height[i];
                  sum +=water;
         

         }
         return sum;
        
    }
};