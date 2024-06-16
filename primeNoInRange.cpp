#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false; // 0 and 1 are not prime numbers
        if (num == 2) return true;  // 2 is a prime number
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    vector<int> primeRange(int M, int N) {
        vector<int> ans;

        for (int i = M; i <= N; ++i) {
            if (isPrime(i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
