#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // Start from the last digit
        for (int i = N - 1; i >= 0; i--) {
            // If the current digit is less than 9, increment it and return
            if (arr[i] < 9) {
                arr[i]++;
                return arr;
            }
            // Otherwise, set the current digit to 0
            arr[i] = 0;
        }
        // If all digits were 9, we need an additional digit
        arr.insert(arr.begin(), 1);
        return arr;
    }
};
