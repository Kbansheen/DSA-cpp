#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:

// Helper function to check if a number is prime
        bool isPrime(int num) {
            if (num <= 1) return false;
            if (num == 2) return true;
            for (int i = 2; i <= sqrt(num); ++i) {
                if (num % i == 0) return false;
            }
            return true;
        }
        
    vector<int> getPrimes(int n) {
        

        // Find the pair of primes
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime(i) && isPrime(n - i)) {
                return {i, n - i};
            }
        }

        // If no pair is found
        return {-1, -1};
    }
};