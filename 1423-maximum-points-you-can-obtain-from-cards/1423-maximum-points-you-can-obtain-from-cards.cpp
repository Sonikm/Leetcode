class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        int l=0, r=n-1;
        int sum = 0;

        while(l<k){
            sum += cardPoints[l];
            l++;
        }

        if(k >= n) return sum;

        int ans = sum;

        while(l>=0){
            sum = sum - cardPoints[l] + cardPoints[r];
            ans = max(ans, sum);
            l--, r--;
        }

        return ans;

    }
};