class Solution {
public:
    void sortColors(vector<int>& nums) {
    // most optical solution with in-place
    int n = nums.size();
    int low=0, mid=0, high=n-1;

    while(mid <= high){ // 1
       if(nums[mid] == 0) {
             swap(nums[mid++], nums[low++]);
          }
       else if(nums[mid] == 2){  // 2
        swap(nums[mid], nums[high--]);
         }
       else { // 1
        mid++; 
        }
      }
    }
};