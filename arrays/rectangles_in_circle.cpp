class Solution {
public:
    int rectanglesInCircle(int r) {
        int count = 0;
        int limit = 2 * r;
        for (int l = 1; l <= limit; ++l) {
            for (int w = 1; w <= limit; ++w) {
                if (l * l + w * w <= 4 * r * r) {
                    count++;
                }
            }
        }
        return count;
    }
};