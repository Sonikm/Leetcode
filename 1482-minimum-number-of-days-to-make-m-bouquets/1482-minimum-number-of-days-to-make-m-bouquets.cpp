class Solution {

  int countBloomedFlower(vector<int>& bloomDay, int maxDay, int k, int n){

   int gc = 0;
   int bfc = 0;

   for(int i=0; i<n; i++){
    gc++;

    if(bloomDay[i] <= maxDay && gc == k){
        bfc++;
        gc = 0;
    }
    else if(bloomDay[i] > maxDay){
        gc = 0;
    }
   }

   return bfc;

  }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        if((long) m*k > n) return -1;

        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());

        // cout << s << e << endl;

        int ans = -1;

        while(s <= e){

            int mid = s + (e - s)/2;

            if(countBloomedFlower(bloomDay, mid, k, n) >= m){
                ans = mid;
                e = mid-1; // find minimum days to wait
            }else {
                s = mid+1; // not possible increase day
            }
        }

        return ans;
    }
};