class Solution {
public:
int n , m;
int t[501][501];
int solve(string s1 , string s2,int i,int j){
    if(i == n){
        return m-j;//insert
    }
    else if ( j == m){
        return n-i; // del
    }
    if(t[i][j] != -1){
     return t[i][j];
    }
    if(s1[i] == s2[j]) {
        return t[i][j] = solve(s1,s2,i+1,j+1);
    }
    else{
 int insert = 1+ solve(s1,s2 , i ,j+1);
 int del = 1+ solve(s1,s2 , i+1 ,j);
 int rep = 1+ solve(s1,s2 , i+1 ,j+1);
    return  t[i][j]= min({insert , del ,rep});

    }
    return -1;
}

    int minDistance(string word1, string word2) {

        n =  word1.length();
        m =  word2.length();
       memset(t,-1,sizeof(t));
       return  solve(word1,word2,0,0);
        
    }
};