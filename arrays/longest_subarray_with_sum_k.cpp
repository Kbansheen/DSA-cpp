//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)          //brute force = tc = o(n2)
    { 
        int len = 0;
        for(int i = 0; i<N; i++)
        {
            int sum = 0;
    
            for(int j = i; j<N; j++)
            {
                sum = sum + A[j];
                if(sum == K)
                {
            
                len = max(len,j-i+1);
                }
            
            }
            
        }
        
        return len;
    } 

};

