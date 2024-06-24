
#include <bits/stdc++.h>
using namespace std;


/*Function to count number of elements with occurrence
* exactly equal to floor(sizeof_array/K)
* arr : input array
* sizeof_array : number of array elements
*/
int countSpecials(int arr[], int sizeof_array, int K){
    
    sort(arr, arr + sizeof_array);
    
    int f = floor(sizeof_array/K), count = 0;
    int frequency = 1;
    
    
    for(int i = 1; i<sizeof_array; i++)
    {
        if(arr[i] == arr[i-1])
        {
            frequency++;
            
        }
        else
        {
            if(frequency == f)
        {
            count++;
        }
        
        
            frequency = 1; //reset frequency for new element
        }
        
        
    }
    if (frequency == f) {
        count++;
    }
    
    
    return count;
    
}

