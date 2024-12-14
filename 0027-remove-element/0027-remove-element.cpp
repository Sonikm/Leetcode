class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        
        // add -1 for the val element
        for(int i=0; i<n; i++){
            if(nums[i] == val) nums[i] = -1;
        }

        int i=0, j=0;

      // now shift elment  
        while(j<n){
            if(nums[i] != -1 && nums[j] != -1) {
                i++, j++;
            }
            else if(nums[j] != -1){
                nums[i] = nums[j];
                nums[j] = -1;
                j++, i++;
            }
            else {
                j++;
            }
        }

        return i;
     
    }
};