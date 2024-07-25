
#include<bits/stdc++.h>
using namespace std;


int searchInsert(vector<int>& arr, int m)            //lower bound in binary search
{
	int n = arr.size();
	int low = 0;
	int high = n-1;
	
	int ans = n;

	
	while(high>=low)
	{
		int mid = (low+high)/2;
          if (arr[mid] >= m) 
		  {
			  ans = mid;
            high = mid - 1;
          }

		  else
		  {
			  low  = mid+1;
		  }

		  
    }

	return ans;
}