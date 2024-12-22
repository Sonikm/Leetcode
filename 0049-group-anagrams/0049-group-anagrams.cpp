class Solution {
public:
 
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> ans;
        map<string, vector<string>> m;
        int n = str.size();

         for(int i=0; i<n; i++){
                
              string word = str[i];
              sort(word.begin(), word.end());
              m[word].push_back(str[i]);
         } 

         for(auto& entry : m){
           ans.push_back({entry.second});
         } 
             
        return ans;
    }
};