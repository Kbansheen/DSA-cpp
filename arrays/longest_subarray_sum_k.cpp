
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)     // optimised ony for positives using 2 pointer
    { 
        int left = 0;
        int right = 0;
        long long sum = A[0];
        
        int len = 0;
        
        while(right<N)
        {
            while(left<= right && sum > K)
            {
                sum = sum - A[left];
                left++;
            }
            
            if(sum == K)
            {
                len = max(len, right-left+1);
            }
            right++;
            
            if(right<N)
            {
                sum+= A[right];
            }
        }
        return len;
    } 

};