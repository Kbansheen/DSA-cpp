#include <bits/stdc++.h> 
using namespace std;


class solution
{
int largestElement(vector<int> &arr, int n) {
     
     int largest = arr[0];           //tc = o(n) = better solution
                                      //sort function can also be used
     for(int  i =1; i<n;i++)
     {
         if(arr[i] > largest)
         {
             largest = arr[i];
         }
     }

     return largest;
}
};
