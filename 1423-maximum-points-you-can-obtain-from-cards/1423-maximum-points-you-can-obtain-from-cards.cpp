class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        int sum = 0;

        for(int i=0; i<k; i++){
            sum += cardPoints[i];
        }

        if(k >= n) return sum;

        int ans = sum;
        int l=k-1, r=n-1;

        while(l>=0){
            sum = sum - cardPoints[l] + cardPoints[r];
            ans = max(ans, sum);
            l--, r--;
        }

        return ans;

    }
};