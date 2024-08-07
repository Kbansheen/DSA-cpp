#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *first = new int[l1];
    int *second = new int[l2];

    //copy 
    int k = s;
    for(int i =0; i<l1; i++)
    {
        first[i] = arr[k++];
    }

     k = mid +1;
    for(int i = 0; i <l2; i++)
    {
        second[i] = arr[k++];
    }

    //merge 2 sorted arrays
     k = s;
    int index1 = 0;
    int index2 = 0;

    while (index1 < l1 && index2 < l2)
    {
        if(first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < l1 )
    {
        arr[k++] = first[index1++];
    }

    while(index2 < l2)
    {
         arr[k++] = second[index2++];
    }

    delete []first;
    delete []second;
    
}

void mergeSort(int *arr, int s, int e)
{
   //base case
   if(s>=e)
   return;

   int mid = (s+e)/2;

   //left part sort
   mergeSort(arr,s,mid);

   //right part
   mergeSort(arr,mid+1, e);

   //merge
   merge(arr,s,e);
}


int main()
{
    int arr[] = {2,6,8,3,5};
    int n = 5;
    

    mergeSort(arr, 0, n-1);
    cout<<"sorted array: "<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}