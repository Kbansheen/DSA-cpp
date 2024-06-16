#include <vector>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long miss = 1;  // Smallest number that can't be formed
        int patches = 0;  // Number of patches needed
        int i = 0;  // Index for nums

        while (miss <= n) {
            if (i < nums.size() && nums[i] <= miss) {
                // If nums[i] can be used to form `miss`, we extend the range
                miss += nums[i];
                i++;
            } else {
                // Otherwise, add `miss` to the array to extend the range
                miss += miss;
                patches++;
            }
        }

        return patches;
    }
};
