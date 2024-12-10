class Solution {

// find max frequent
 int getMaxFreq(int freq[]){
    int maxi = 0;

    for(int i=0; i<26; i++){
     maxi = max(freq[i], maxi);
    }

    return maxi;
 }

// find min frequent
 int getMinFreq(int freq[]){
    int mini = INT_MAX;

    for(int i=0; i<26; i++){
        if(freq[i] != 0) {
          mini = min(freq[i], mini);
        }
    }
    return mini;
 }

public:
    int beautySum(string s) {
    int sum = 0;

    for(int i=0; i<s.length(); i++){
        
        int freq[26] = {0};

        for(int j=i; j<s.length(); j++){
            freq[s[j] - 'a']++;
            int beauty = getMaxFreq(freq) -  getMinFreq(freq);;
            sum += beauty;
        }
    }

    return sum;
    }
};
