class Solution {
public:
    bool rotateString(string s, string goal) {

    if(s == goal) return true;
    // int n=s.length();
    if(s.length() != goal.length()) return false;

    string newString = (s+s);

    if(newString.contains(goal)) return true;
    else return false;
    // int i=0;
    // int r = 0;

    // for(i; i<n; i++){
    //     if(s[i] == goal[0]) break;
    //     r++;
    // }

    // reverse(s.begin(), s.begin()+r);
    // reverse(s.begin()+r, s.end());
    // reverse(s.begin(), s.end());

    //  return goal == s;
    }
};