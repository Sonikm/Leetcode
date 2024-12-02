class Solution {
    // Calculate the total hours needed to eat all bananas at a given speed.
    long totalHours(vector<int>& piles, int speed, int n) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (piles[i] + speed - 1) / speed; // Avoid floating-point operations.
        }
        return sum;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        if (h < n) return -1; // Impossible if hours are less than piles.

        int s = 1; // Minimum speed (1 banana per hour).
        int e = *max_element(piles.begin(), piles.end()); // Maximum speed.
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // Check if eating at speed 'mid' is possible within 'h' hours.
            if (totalHours(piles, mid, n) <= h) {
                ans = mid;
                e = mid - 1; // Try for a smaller speed.
            } else {
                s = mid + 1; // Increase speed.
            }
        }

        return ans;
    }
};
