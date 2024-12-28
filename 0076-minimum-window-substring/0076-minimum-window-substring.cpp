class Solution {
public:
    string minWindow(string s, string t) {
       if(t.size() > s.size()) return "";

       int n = s.size();
       int m = t.size();
       unordered_map<char,int> countT;
       unordered_map<char,int> window;

       // count charactor frequency
       for(auto x : t){
         countT[x]++;
       }

       int have = 0, need = countT.size();
       int res[2] = {-1, -1};
       int resLen = INT_MAX;
       int l = 0;

      for(char r : s){
        char c = r;
        window[c]++;

        if(countT.find(c) != countT.end() && window[c] == countT[c]){
            have += 1;
        }

        while(have == need){
            // update our result
            int minLn = r - l + 1;
            if(minLn < resLen){
                res[0] = l;
                res[1] = r;
                resLen = minLn;
            }
            // pop from the left of our window
            window[s[l]]--;
            if(countT.find(s[l]) != countT.end() && window[s[l]] < countT[s[l]]) {
                have--;
            }

            l++;
        }
    
      }

      if(res[0] == -1) return "";

      return  s.substr(res[0], (res[1] - res[0] + 1));


    }
};