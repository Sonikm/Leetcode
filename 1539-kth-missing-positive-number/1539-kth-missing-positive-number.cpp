class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len = arr.size();
        int lastNumber = arr[len-1];
        
         
         if(k + len > lastNumber) return len+k;

        int totalMissingNumberCount = lastNumber - len;
        int i=0, missingCount = 0;
        int num=1;

        while(num<=lastNumber && i < len){
            if(num == arr[i]) i++;
            else{
                missingCount++;
                if(missingCount == k) return num;
            }
            num++;
        }
       
       return num;

    }
};