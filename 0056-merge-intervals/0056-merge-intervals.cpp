class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
   vector<vector<int>> ans;
   int idx = 0;

   sort(intervals.begin(), intervals.end());

   ans.push_back({intervals[0][0],intervals[0][1]});

   for(int i=1; i<intervals.size(); i++){
      int start = intervals[i][0];
      int end = intervals[i][1];
     
      if(ans[idx][0] >= start){
         ans[idx][0] = start;
      }
     
      if(ans[idx][1] >= start && ans[idx][1] < end){
        ans[idx][1] = end;
      }
       if(start > ans[idx][1]){
        idx++;
        ans.push_back({start, end});
      }
   } 

   return ans;
    }
};