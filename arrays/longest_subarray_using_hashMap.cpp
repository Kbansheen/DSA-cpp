
#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<long long,int> mpp;
        long long sum = 0;                               //optimised in case of +ves and -vses
       
        
        int len = 0;
        
        for(int i = 0; i<N; i++)
        {
            sum = sum+A[i];
            if(sum == K)
            {
                len = max(len, i+1);
            }
            long long rem = sum - K;
            if(mpp.find(rem) != mpp.end())
            {
                int len2 = i - mpp[rem];
                len = max(len, len2);
            }
            
            if(mpp.find(sum) == mpp.end())
            {
                mpp[sum] = i;
            }
        }
        return len;
        
       
    } 

};






//leetcode 560
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {                 //to return no. of subarrays
        int N = nums.size();
        map<long long, int> mpp;
        long long sum = 0;
        int count = 0;

        for (int i = 0; i < N; i++) {
            sum += nums[i];

            // If the cumulative sum equals k, increment the count
            if (sum == k) {
                count++;
            }

            // If (sum - k) is found in the map, it means there are subarrays
            // which sum up to k ending at the current index
            long long rem = sum - k;
            if (mpp.find(rem) != mpp.end()) {
                count += mpp[rem];
            }

            // Store the cumulative sum in the map
            mpp[sum]++;
        }

        return count;
    }
};
