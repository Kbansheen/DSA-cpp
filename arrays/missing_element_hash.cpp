#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        vector<int> hash(n+1, 0);                 //tc = o(n + n)
                                                  //sc = o(n)
        for(int i = 0; i<n; i++)
        {
            hash[nums[i]]++;
        }
        
        for(int i = 0; i<n+1; i++)
        {
            if(hash[i] == 0)
            return i;
        }
   return 0;  }
};