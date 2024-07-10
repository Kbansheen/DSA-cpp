#include<bits/stdc++.h>
using namespace std;


//array rotate left by d steps
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

         int n = nums.size();
        k = k % n;  // In case d is greater than n
        if (k == 0) return;  // No need to rotate if d is 0

        // Reverse the first d elements
        reverse(nums.begin(), nums.begin() + k);
        // Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
        // Reverse the entire array
        reverse(nums.begin(), nums.end());
    }
};



//array rotate right by d steps

class Solution2 {
public:
    void rotate(vector<int>& nums, int k) {

         int n = nums.size();
        k = k % n;  // In case d is greater than n
        if (k == 0) return;  // No need to rotate if d is 0

        // Reverse the first d elements
        reverse(nums.begin(), nums.end());
        // Reverse the remaining elements
        reverse(nums.begin(), nums.begin() + k);
        // Reverse the entire array
        reverse(nums.begin() + k, nums.end());
    }
};


//using temp variable to reverse
class Solution3 {
public:

void reverse(int arr[], int start, int end)
{
    while(start<= end)
    {
        int temp  = arr[start];
        arr[start]  = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}
    void rotate(int arr[], int k) {

         int n = sizeof(arr)/sizeof(arr[0]);
        k = k % n;  // In case d is greater than n
        if (k == 0) return;  // No need to rotate if d is 0

        // Reverse the first d elements
        reverse(arr, 0, k-1);
        // Reverse the remaining elements
        reverse(arr, k-1, n-1);
        // Reverse the entire array
        reverse(arr, 0, n-1);
    }
};