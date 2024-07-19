
//2 pointer =  tc = o(n+m)
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int ans[n + m]; // Array to store intersection elements
        int ansIndex = 0; // Index for ans array
        
        int i = 0;
        int j = 0;
        
        // Sort both arrays to use two-pointer technique
        sort(a, a + n);
        sort(b, b + m);
        
        while(i < n && j < m)
        {
            if(a[i] > b[j])
            {
                j++;
            }
            else if(b[j] > a[i])
            {
                i++;
            }
            else
          {
                // Add element to ans array if not already added
                if(ansIndex == 0 || ans[ansIndex - 1] != a[i])
                {
                    ans[ansIndex++] = a[i];
                }
                i++;
                j++;
            }
        }
        
        return ansIndex;
    }
    };






