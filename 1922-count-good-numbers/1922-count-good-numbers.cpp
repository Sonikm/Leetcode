class Solution {
public:
    const int MOD = 1e9 + 7;

    // Function to perform modular exponentiation
    long long modExp(long long x, long long n, long long mod) {
        // Base case
        if (n == 0) return 1;

        // Recursive case
        if (n & 1) { // If n is odd
            return (x * modExp((x * x) % mod, (n - 1) / 2, mod)) % mod;
        } else { // If n is even
            return modExp((x * x) % mod, n / 2, mod);
        }
    }

    int countGoodNumbers(long long n) {
        long long evens = (n + 1) / 2; // Count of even indices
        long long odds = n / 2;       // Count of odd indices

        // Compute powers using modular exponentiation
        long long evenNumbers = modExp(5, evens, MOD);
        long long oddNumbers = modExp(4, odds, MOD);

        // Return the final result modulo MOD
        return (evenNumbers * oddNumbers) % MOD;
    }
};
