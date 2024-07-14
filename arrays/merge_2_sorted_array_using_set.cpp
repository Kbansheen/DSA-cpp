#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        
         set<int> st;
        

    // Insert elements from arr1 into the set (only the first m elements)
    for(int i = 0; i < n; i++) {
        st.insert(arr1[i]);
    }

    // Insert elements from arr2 into the set
    for(int i = 0; i < m; i++) {
        st.insert(arr2[i]);
    }
    
     vector<int> temp;

    // Copy elements from the set back to arr1
    int i = 0;
    for(auto it = st.begin(); it != st.end(); ++it) {
        temp.push_back(*it);
    }
    
   
  return temp;

    
    }
};