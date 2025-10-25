class Solution {
public:
    int totalMoney(int n) {
        int ans =  0;
        int mon  = 0 ;
        int temp = mon; 
        for(int  i = 0 ; i<n;i++){

         if(  i%7 == 0){
                mon +=1;
                temp = mon;
            }
           //cout<<temp<<endl;
            ans += temp;
            temp++;
            
        }
        return ans; 
        
    }
};