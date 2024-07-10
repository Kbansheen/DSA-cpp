
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        vector<long long> ans;
        
        long long x = A;
        long long y = B;
        
        while(A > 0 && B > 0)
        {
            if(A > B)
            {
                A = A % B;
            }
            else
            {
                B = B%A;
            }
            
        }
        
        long long gcd = (A == 0) ? B : A;
        ans.push_back(gcd); 
        
           long long lcm = (x * y) / gcd;
        ans.insert(ans.begin(), lcm);
        
       return ans; 
        
    }
};

