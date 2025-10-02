class Solution {
public: 

int ans = 0;
int emptybottle = 0;

    int maxBottlesDrunk(int numBottles, int numExchange) {
        ans = numBottles;
        emptybottle = numBottles;
      
       while(emptybottle >= numExchange ){
        emptybottle = emptybottle - numExchange; 
         
         
            ans+=1;
            emptybottle += 1; 
            numExchange+=1;
         
         }
          return ans;
    }
      
}; 