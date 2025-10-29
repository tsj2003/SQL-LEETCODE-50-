class Solution {
public:
     bool allsetbit( int x){
        return ((x & x+1) == 0);
     }
    int smallestNumber(int n) {

        int res = n;
        while(! allsetbit(res)){
            res++;
        }
        return res;
        
    }
};