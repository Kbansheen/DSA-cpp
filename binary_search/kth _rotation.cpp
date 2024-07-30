
#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
    
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while (high >= low) {
        int mid = (low + high) / 2;

        // Check if the left part is sorted
        if (arr[low] <= arr[mid]) {
            // Update the minimum value and its index
            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }
            low = mid + 1;
        } else { // Right part is sorted
            // Update the minimum value and its index
            if (arr[mid] < ans) {
                ans = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }

    return index;
}
   
