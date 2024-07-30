
#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	int n =  arr.size();
        int low = 1;
        int high = n-2;
		if(n==1) return nums[0];  //if only 1 element

         if(arr[0] != arr[1])
         return arr[0];

         if(arr[n-1] != arr[n-2])
         return arr[n-1];

         while(low<= high)
         {
            int mid = (low+high)/2;

            if(mid > 0 && mid < n - 1 && arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1])
            return arr[mid];

           // (even,odd)
            if((mid%2 == 0 && arr[mid] == arr[mid+1]) || (mid %2 == 1 && arr[mid] == arr[mid-1]) )  // we r on left part so eliminate left half of mid
            {
                  low = mid+1;
            }

            else   //right part eliminate (odd,even)
            {
                high = mid-1;
            }

         }

         return -1;
}