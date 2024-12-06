class Solution {

   int gcd(int a, int b){
    if(a == b) return a;
    else if(a == 0) return b;
    else if(b == 0) return a;
    else if(a > b) return gcd(a-b, b);
    return gcd(a, b-a);
   }

public:
    int findGCD(vector<int>& nums) {
       
       int smallest = *min_element(nums.begin(), nums.end());
       int greatest = *max_element(nums.begin(), nums.end());

       return gcd(smallest, greatest);
    }
};