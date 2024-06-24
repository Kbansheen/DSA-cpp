#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr, int n) {
        vector<int> result;

        // Iterate over the array
        for (int i = 0; i < n; i++) {
            // Calculate index based on the current value
            int index = abs(arr[i]);
            
            // Ensure index is within bounds
            if (index < n) {
                // Check if the value at this index is already negative
                if (arr[index] >= 0) {
                    // If not, make it negative
                    arr[index] = -arr[index];
                } else {
                    // If it is, it means this number is a duplicate
                    result.push_back(index);
                }
            }
        }

        // If no duplicates found, return [-1]
        if (result.empty()) {
            result.push_back(-1);
        }

        // Return the result in sorted order
        sort(result.begin(), result.end());
        return result;
    }
};
