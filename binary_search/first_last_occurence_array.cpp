
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

int lowerBound(vector<int> nums, int n, int target) {       // return smallest index such that numsay element >= x
	
	int low = 0;
	int high = n-1;
	int ans = n;

	
	while(high>=low)
	{
		int mid = (low+high)/2;
          if (nums[mid] >= target) 
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

int upperBound(vector<int> &nums, int n, int target){   //return smallest index such that numsay element > x
	int low = 0;
	int high = n-1;
	int ans  = n;

	while(high>= low)
	{
		int mid = (low+high)/2;

		if(nums[mid] > target)
		{
			ans = mid;
            high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}

	return ans;	
}



    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int ans1 = lowerBound(nums,n,target);
	int ans2 = upperBound(nums,n,target) - 1;

    if(ans1 == n || nums[ans1] != target)
    {
        return {-1,-1};
    }
        
        return {ans1, ans2};
    }
};