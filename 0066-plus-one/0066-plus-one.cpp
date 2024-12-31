class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();

       if(digits[n-1] != 9){
        digits[n-1] = digits[n-1]+1;
        return digits;
       }

       int lastElm = 0;
       vector<int> ans;

       int i = n-1;
       for(i; i>=0; i--){
          
          if(digits[i] == 9){
           ans.push_back(0);
           lastElm = 1;
          }
          else if(digits[i] != 9){
            ans.push_back(digits[i] + lastElm);
            lastElm = 0;
            i--;
            break;
          }
       }

       // add remaining elements
       if(lastElm == 1 && i < 0){
        ans.push_back(1);
       } 

       while(i >= 0){
        ans.push_back(digits[i]);
        i--;
       }

       reverse(ans.begin(), ans.end());

       return ans;
    }
};