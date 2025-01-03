class Solution {
public:
     map<char, string> mapping = {
        {'2', "abc"}, 
        {'3', "def"}, 
        {'4', "ghi"}, 
        {'5', "jkl"}, 
        {'6', "mno"}, 
        {'7', "pqrs"}, 
        {'8', "tuv"}, 
        {'9', "wxyz"}
     };

    void solve(string &digits, vector<string>& ans, string curr_str, int idx){

        if(idx == digits.size()){
            ans.push_back(curr_str);
            return;
        }
       
       char dig = digits[idx];

       for(int letter:mapping[dig]){
          curr_str += letter;
          solve(digits, ans, curr_str, idx+1);
          curr_str.pop_back();
       }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;

        string curr_str;

        solve(digits, ans, curr_str, 0);
        return ans;
    }
};