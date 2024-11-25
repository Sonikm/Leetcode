class Solution {

   int isPossible(vector<int>& weights,int n, int days, int mid){
      
      int shipDays = 1;
      int weightSum = 0;

      for(int i=0; i<n; i++){
        if(weightSum + weights[i] <= mid){
            weightSum += weights[i];
        }
        else {
            shipDays++;
            if(shipDays > days || weights[i] > mid) return false;
            weightSum = weights[i];
        }
      }

      return true;
   }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int n = weights.size();

        for(int i=0; i<n;i++){
            sum += weights[i];
        }

        int s = 0;
        int e = sum;
        int ans = -1;

        int mid = s + (e-s)/2;

        while(s<=e){
            if(isPossible(weights, n, days, mid)){
                ans = mid;
                e = mid-1;
            }
            else {
                s = mid+1;
            }

             mid = s + (e-s)/2;
        }

        return ans;
    }
};