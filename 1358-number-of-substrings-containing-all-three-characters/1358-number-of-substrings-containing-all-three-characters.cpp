class Solution {
public:
    int numberOfSubstrings(string s) {
        // BRUTE FORCE APPROACH
        int n = s.size();
        int count = 0;

        for(int i=0; i<n; i++){
            unordered_map<char, int> hash;

            for(int j=i; j<n; j++){
                hash[s[j]] = 1;

                if(hash['a'] == 1 && hash['b'] == 1 && hash['c'] == 1)  count++;
            }
        }

        return count;
    }
};