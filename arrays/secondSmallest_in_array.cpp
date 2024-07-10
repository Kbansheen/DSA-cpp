#include <bits/stdc++.h>
using namespace std;


int secondSmallest(int n , vector<int> &arr)
{
    int smallest = arr[0];
    int secondsmallest = INT_MAX;

    for(int i=1; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest =  arr[i];
        }

        else if(arr[i] > smallest && arr[i] < secondsmallest)
        {
            secondsmallest = arr[i];
        }
        
    }

     if(secondsmallest == INT_MAX)
        {
            return -1;
        }

    return secondsmallest;
}
int findSecondSmallest(int n, vector<int> &arr)
{
    int secondsmallest = secondSmallest(n, arr);
    return secondsmallest;
}