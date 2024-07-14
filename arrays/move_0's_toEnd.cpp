
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {                     //2 pointer approach = tc= o(n)

        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] > nums[(i+1)%n])
            {
                count++;
            }
        }

        if(count == 0 || count == 1)
        {
            return true;
        }
        return false;
        
    }
};