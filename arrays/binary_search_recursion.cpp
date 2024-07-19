

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
  int solve(vector<int> &arr, int k, int n, int mid, int low, int high)
  {
      //base case
      if(low>high)
      return -1;
      
      if(arr[mid] == k)
      return mid;
      
      else if(arr[mid] > k)
      high = mid-1;
      
      else
      low = mid+1;
      
      mid = (low+high)/2;
      solve(arr,k,n,mid, low, high);
  }
  
  
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int mid = (low+high)/2;
    
    int num = solve(arr,k,n,mid, low, high);
    return num;
    }
};

