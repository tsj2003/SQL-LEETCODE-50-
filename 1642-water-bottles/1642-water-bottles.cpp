class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int consumed = numBottles;
        int emptybottle = numBottles;


        while(emptybottle>=numExchange){
            int extrafullbottle = emptybottle/numExchange;
           
            int remain =  emptybottle  % numExchange;
           
            consumed += extrafullbottle;


            emptybottle = remain + extrafullbottle;
              


        }
        return consumed;
    }
};