class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len = arr.size();
        int left = 0, right = len - 1;

        // Binary search
        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Calculate how many numbers are missing before arr[mid]
            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                // Not enough missing numbers, move right
                left = mid + 1;
            } else {
                // Too many missing numbers, move left
                right = mid - 1;
            }
        }

        // After the loop, `left` points to the first index where missing >= k
        // Calculate the k-th missing number
        return left + k;
    }
};
