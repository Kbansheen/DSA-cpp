
#include<bits/stdc++.h>
using namespace std;


int floorValue(vector<int> &a, int n, int x)
{
	 int low = 0;
        int high = n-1;
        int ans = -1;
        
        while(high>= low)
        {
           int mid = (low+high)/2;
            
            if(a[mid] > x)
            {
                high = mid-1;
            }
            else
            {
                ans = a[mid];
                low = mid + 1;
            }
        }
        return ans;
}


int ceilValue(vector<int> &a, int n, int x)
{
	int low = 0;
	int high = n-1;
	int ans = -1;

	
	while(high>=low)
	{
		int mid = (low+high)/2;
          if (a[mid] >= x) 
		  {
			  ans = a[mid];
            high = mid - 1;
          }

		  else
		  {
			  low  = mid+1;
		  }

		  
    }

	return ans;
}



pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	
	int ans1 = floorValue(a,n,x);
	int ans2 = ceilValue(a,n,x);

	return {ans1, ans2};
}