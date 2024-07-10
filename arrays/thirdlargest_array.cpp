
#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
  
 int thirLargest(int a[], int n)
  {
      
      if(n < 3)
      {
          return -1;
      }
      
      
      int largest = a[0];
      int secondlargest = -1;
      int thirdlargest = -1;
      
      for(int i =0; i<n; i++)
      {
          if(a[i] > largest)
          {
              thirdlargest = secondlargest;
              secondlargest = largest;
              largest = a[i];
          }
          if(a[i] < largest && a[i] > secondlargest)
          {
              thirdlargest = secondlargest;
              secondlargest = a[i];
              
          }
          
          if(a[i] < secondlargest && a[i] > thirdlargest)
          {
              thirdlargest = a[i];
          }
      }
      
      return thirdlargest;
  }
    int thirdLargest(int a[], int n)
    {
         int tlargest = thirLargest(a,n);
         return tlargest;
    }

};
