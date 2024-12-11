class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
      // sort array
      vector<int>v(nums);
      vector<int>temp(2,0);
      vector<int>ans;
      sort(v.begin(), v.end());

      int i=0, j=v.size()-1;

    while(i<j){
        int sum = v[i] + v[j];
        if(sum == target){
            temp[0] = v[i];
            temp[1] = v[j];
            break;
        }
        else if(sum > target) j--;
        else i++;
    }

    // find both element index
    for(int i=0; i<nums.size(); i++){
        if(temp[0] == nums[i]){
            ans.push_back(i);
        }
        else if(temp[1] == nums[i]){
            ans.push_back(i);
        }

        if(ans.size() == 2) return ans;
    }

    return ans;

    }
};