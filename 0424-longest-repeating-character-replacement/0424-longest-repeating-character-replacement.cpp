class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();
        int maxCount = 0;
       // BRUTE FORCE APPROACH

       for(int i=0; i<n; i++){
        int currentChar = s[i];
        // int currentCount = 0;
        int k2 = k;
        int l=0, r=0;
        
        for(int r=0; r<n; r++){

            if(s[r] != currentChar) k2--;
            if(k2  < 0){
                if(s[l] != currentChar) k2++;
                l++;
            }
            // currentCount++;
            maxCount = max(maxCount, r-l+1);
        }
       }

       return maxCount;
    }
};