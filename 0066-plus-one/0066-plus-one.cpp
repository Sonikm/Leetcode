class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s = "";

        for(int x:digits){
            s += to_string(x);
        }

        s = to_string(stoi(s)+1);
        vector<int> ans;
        for(int i=0; i<s.size(); i++){
            ans.push_back(s[i] - '0');
        }

        return ans;
    }
};