class Solution {
public:
    int lengthOfLongestSubstring(string s) {

       // OPTIMAL APPROACH
        int maxLen = 0;
        int n = s.size();
        int l=0, r=0;
        unordered_map<char, int> hash;

        while(r<n){
           
           // if it is present in our hash or not
           if(hash[s[r]]){
             // check if it is an the range or not
              if(hash[s[r]] >= l){
               l = hash[s[r]] + 1; // move to left 
              }
             maxLen = max(maxLen, r-l+1); // get max length
           }

           hash[s[r]] = r;
           r++;
        }

        return maxLen;

        // BRUTE FORCE APPROACH

        // for(int i=0; i<n; i++){
        //     unordered_map<char,int> hash;
        //     for(int j=i; j<n; j++){
              
        //       int key = s[j]; // get index value
        //       if(hash[key]) break;

        //       ans = max(ans, j-i+1);
        //       hash[key] = 1; // mark visited
        //     }
        // }

        // return ans;
    }
};