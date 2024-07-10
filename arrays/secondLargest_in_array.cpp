#include <bits/stdc++.h>
using namespace std;


int secondLargest(int n , vector<int> &arr)
{
    int largest = arr[0];
    int secondlargest = INT_MIN;

    for(int i=1; i<n; i++)
    {
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest =  arr[i];
        }

        else if(arr[i] < largest && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
        
    }

     if(secondlargest == INT_MIN)
        {
            return -1;
        }

    return secondlargest;
}
int findSecondLargest(int n, vector<int> &arr)
{
    int secondlargest = secondLargest(n, arr);
    return secondlargest;
}