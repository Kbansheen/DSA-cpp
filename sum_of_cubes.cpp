#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long n) {
        long long sum_n = (n * (n + 1)) / 2; // Sum of the first n natural numbers
        return sum_n * sum_n; // Square the sum to get the sum of cubes
    }
};