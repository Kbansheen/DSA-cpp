#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {           //better solution 

        map<long long, int> mpp;
        for(int i = 0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it: mpp)
        {
            if(it.second == 1)
            {
                return it.first;
            }
        }
        
   return 0; }
};