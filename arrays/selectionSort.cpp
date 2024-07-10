 
 
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {

  
  int arr[5] = {7,9,3,8,0};
  int n =5;
 
 for(int i = 0; i<= n-2; i++)
       {
           int min = i;
           
           for(int j = i; j<= n-1; j++)
           {
               if(arr[j] < arr[min])
               {
                   min = j;
               }
           }
           
           swap(arr[min], arr[i]);
       }

       return 0;
 }