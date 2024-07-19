#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    
    int i = 0;  //pointers(2 pointer approach)
    int j = 0;  //tc = o(m+n)  sc = o(m+n)

vector<int> temp;

while(i<m && j<n)
{
    if(arr1[i] <= arr2[j])
    {
        if(temp.size() == 0 || temp.back() != arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
    }
    else{
        if(temp.size() == 0 || temp.back() != arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
    }
}

while(j<n)
{
    if(temp.size() == 0 || temp.back() != arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
}

while(i<m)
{
    if(temp.size() == 0 || temp.back() != arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
}

for(int i = 0; i<temp.size(); i++)
{
    arr1[i] = temp[i];
}

return arr1;

}
