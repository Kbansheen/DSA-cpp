
#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> arr, int n, int x) {       // return smallest index such that array element >= x
	
	int low = 0;
	int high = n-1;
	int ans = n;

	
	while(high>=low)
	{
		int mid = (low+high)/2;
          if (arr[mid] >= x) 
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
