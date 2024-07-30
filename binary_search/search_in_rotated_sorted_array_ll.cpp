
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool search(vector<int>& nums, int target) {             //duplicates

        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(high>= low)
        {
           int mid = (low+high)/2;

            if(nums[mid] == target)
            return true;

            if(nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                low++;
                high--;
                continue;
            }



            if(nums[low] <= nums[mid])   //left part sorted
            {
                 if(nums[low]<=target && target<= nums[mid])
                 {
                    high = mid-1;
                 }
                 else
                 low = mid+1;
            }
            else                            //right part sorted
            {
                if(nums[mid] <= target && target<= nums[high])
                {
                    low = mid+1;
                }
                else
                high = mid-1;
            }


        }

        return false;
        
    }
};