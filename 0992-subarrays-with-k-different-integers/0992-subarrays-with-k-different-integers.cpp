class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        for(int i=0; i<n; i++){
            unordered_map<int,int> hash;

            for(int j=i; j<n; j++){
               hash[nums[j]] = 1;
               
               if(hash.size() > k) break;
               if(hash.size() == k) cnt++; 
            }
        }

        return cnt;
    }
};