class Solution {
public: int cnt = 0 ; 
    int countOperations(int num1, int num2) {
        while(num1 > 0 && num2 > 0){
            cnt += num1/num2;
            num1 = num1 % num2;
            if(num2 > num1) {
                swap(num2 , num1);
            }
            
        }
        return cnt;
    }
};