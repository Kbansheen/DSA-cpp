#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int* printDivisors(int n, int &size) {
    vector<int> divisors;
    // Loop to find divisors
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    // Sort the divisors in ascending order
    sort(divisors.begin(), divisors.end());

    // Update the size of the result array
    size = divisors.size();

    // Allocate memory for the result array
    int* result = new int[size];
    for (int i = 0; i < size; i++) {
        result[i] = divisors[i];
    }

    return result;
}



