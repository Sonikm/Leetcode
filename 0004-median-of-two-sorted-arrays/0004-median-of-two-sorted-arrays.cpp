class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        int n = nums1.size();

        if(n == 1) return nums1[0];

        if(n % 2 != 0){ // odd
          int med = ( n + 1) / 2.0;
          return nums1[med-1];
        }

        int firstIdx = n/2 - 1;
        int secondIdx = n/2;

        double ans = (nums1[firstIdx] + nums1[secondIdx])/2.0;

        // even
        return ans;

    }
};