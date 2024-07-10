#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        
        int n = arr.size();
        
        vector<int> ans;
        
        vector<int> hash(n,0);
        
        for(int i =0; i<n; i++)
        {
            hash[arr[i]]++;
        }
        
        for(int i = 0; i<n; i++)
        {
            if(hash[i] > 1)
            {
                ans.push_back(i);
            }
        }
        
        if(ans.empty())
        {
        return {-1};
        }
        
        return ans;
    }
};