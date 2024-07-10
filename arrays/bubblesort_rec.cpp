#include <bits/stdc++.h>
using namespace std;

void bubbleSortRecursive(vector<int>& arr, int n) {
    // Base case: if the size of the array is 1, it's already sorted
    if (n == 1) return;

    // One pass of bubble sort
    int swaps = 0;
    for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swaps = 1;
        }
    }

    // If no swaps were made, the array is already sorted
    if (swaps == 0) return;

    // Recursively call the function for the remaining unsorted part of the array
    bubbleSortRecursive(arr, n - 1);
}





int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSortRecursive(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl; 

    return 0;
}