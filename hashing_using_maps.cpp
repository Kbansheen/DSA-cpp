#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a[5] = {3,5,7,9,3};     //hashing concept of integer array using maps

    map <int,int> mpp;

    for(int i = 0; i<n; i++)
    {
        mpp[a[i]]++;          //precompute

    }

    //traverse a map

    for(auto it : mpp)
    {
        cout<< it.first<< "->"<< it.second<<endl;
    }

    //fetch
    cout<<"enter the no to fetch its occurence in the array";
    int num;
    cin>>num;

    cout<<mpp[num];


    //hashing of strings or char arrays using maps

    string s = "hello";

    map<char, int> m;

    for(int i = 0; i<s.size(); i++)
    {
        m[s[i]]++;
    }

    cout<<"enter the char to fetch";  //no mapping of characters here
    char ch;
    cin>>ch;

    cout<<m[ch];
}