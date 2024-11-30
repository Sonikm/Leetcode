class Solution {

     void mergeSort(vector<int>&arr, int low, int high){

    if(low >= high) return ;
    
      int mid = (low+high)/2;

       // devide left part 
       mergeSort(arr, low, mid);

       // devide right part
       mergeSort(arr, mid+1, high);

       // merge both the part
       merge(arr, low, high, mid);
    }

    void merge(vector<int>& arr,int low, int high, int mid){
        int left = low;
        int right = mid+1;
        vector<int> temp;

        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]) {
                temp.push_back(arr[left++]);
            }
            else {
                 temp.push_back(arr[right++]);
            }
        }

        while(left <= mid) {
             temp.push_back(arr[left++]);
        }

        while(right <= high) {
             temp.push_back(arr[right++]);
        }

        // copy temp arr in same array
        for(int i = low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
       mergeSort(nums, 0, nums.size()-1); // helper fn
       return nums;
    }
};