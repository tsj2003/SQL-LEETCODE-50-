class Solution {
public:

    string generate(string& word){
        int arr[26] = {0};

        for(char&ch : word){
            arr[ch - 'a']++;
            
        }
        string newword2 = "";
        for(int i =0;i<26;i++){
            int freq = arr[i];

            if(freq>0){
                newword2 += string(freq , i+'a');
            }
        }
        return newword2;
        

        
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
         unordered_map<string,vector<string>> mp;
         int n = strs.size();

         for(int i =0;i<n;i++){

            string word  = strs[i];
            string newword = generate(word);
            mp[newword].push_back(word);
         }
     for(auto &it : mp){

        ans.push_back(it.second);

     }
     return ans;
        
    }
};