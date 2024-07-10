#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {  
                                                  //2 pointer approach
                                                  //tc = o(n) = optimised
        int i = 0;
        int n = nums.size();
        for(int j = 1; j<n; j++)
        {
            if(nums[j] != nums[i])
            {
                nums[i+1] = nums[j];
                i = i+1;
            }
        }

        return i+1;
        
    }
};