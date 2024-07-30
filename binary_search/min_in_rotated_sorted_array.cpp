
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = INT_MAX;

        while(high>= low)
        {
            int mid = (low+high)/2;
            if(nums[low]<= nums[mid]) //left party sorted
            {
                ans = min(ans, nums[low]);
                low = mid+1;
            }
            else                            //right part sorted
            {
                ans = min(ans,nums[mid]);
                high = mid-1;
            }
        }

        return ans;
        
    }
};