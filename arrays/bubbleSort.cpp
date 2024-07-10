#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = n-1; i>= 1; i--)
        {
            int swaps = 0;                     //optimised
            
            for(int j = 0; j<i; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    swaps = 1;
                }
                
            }
            if(swaps == 0)
            {
                break;
            }
        }
}
