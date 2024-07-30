#include <bits/stdc++.h>
using namespace std;

int first(vector<int>& arr, int n, int k)
{
	int l = 0;
	int h = n-1;
	int ans  = -1; 

	while(h>=l)
	{
		int mid = (l+h)/2;
		if(arr[mid] == k)
		{
			ans = mid;
			h = mid-1;
		}
		else if(arr[mid]<k)
		{
			l = mid+1;
		}
		else
		h = mid-1;

	}
	return ans;
} 

int last(vector<int>& arr, int n, int k)
{
	int l = 0;
	int h = n-1;
	int ans  = -1; 

	while(h>=l)
	{
		int mid = (l+h)/2;
		if(arr[mid] == k)
		{
			ans = mid;
			l = mid+1;
        } 
		else if (arr[mid] < k)
		{
             l = mid + 1;
        } 
		else
        h = mid - 1;
    }
        return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int ans1 = first(arr,n,k);
	int ans2 = last(arr,n,k);

	if(ans1 == -1)
	return {-1,-1};

	return {ans1, ans2};
}