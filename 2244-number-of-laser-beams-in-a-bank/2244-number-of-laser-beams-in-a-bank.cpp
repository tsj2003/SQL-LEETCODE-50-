class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    int n = bank.size();
    int prevcnt = 0;
    int result = 0; 
    for(int i =0 ; i<n;i++){
        int currcc = 0;
        for(char&ch : bank[i]){
            if(ch  == '1'){
           currcc++;
        }
        }

        
        result += (currcc * prevcnt);

        if(currcc !=0){
           prevcnt =  currcc;
        }
    }
    return result;
        
    }
};