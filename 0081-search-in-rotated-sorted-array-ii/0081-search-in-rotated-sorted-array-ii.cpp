class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0, end = n-1;

        while(st<=end){
            int mid = st + (end - st)/2;

            if(nums[mid] == target) return true;

            // for duplicate elements
            if((nums[st] == nums[mid]) && (nums[mid] == nums[end])) {
                st++, end--;
            }

            // check left part sorted
            else if(nums[st] <= nums[mid])
            {
                if(nums[st] <= target && target < nums[mid]) {
                    end = mid - 1;
                }else {
                    st = mid + 1;
                }
            }
            // right part sorted
            else 
            {
                if(target > nums[mid] && target <= nums[end]){
                    st = mid + 1;
                }else {
                    end = mid - 1;
                }
            }
        }  

        return false;
    }
};