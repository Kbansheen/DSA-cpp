#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Note that the size of the array is n-1               //optimised using sum = tc = o(n) = sc = o(1)
    int missingNumber(int n, vector<int>& arr) {

        int sum = n*(n+1)/2;
        int sum2 = 0;
        
        for(int i = 0; i<n-1; i++)
        {
            sum2 = sum2 + arr[i];
        }
        
        int no = sum - sum2;
        return no;
    }
};