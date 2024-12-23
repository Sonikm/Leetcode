class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.size();

        for(int i=0; i<n; i++){
            unordered_map<char,int> hash;
            for(int j=i; j<n; j++){
              
              int key = s[j]; // get index value
              if(hash[key]) break;

              ans = max(ans, j-i+1);
              hash[key] = 1; // mark visited
            }
        }

        return ans;
    }
};