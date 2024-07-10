#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a[5] = {3,5,7,9,3};     //hashing concept of integer array

    int hash[10] = {0};

    for(int i = 0; i<n; i++)
    {
        hash[a[i]] += 1;          //precompute

    }

    //fetch
    cout<<"enter the no to fetch its occurence in the array";
    int num;
    cin>>num;

    cout<<hash[num];




    //hashing of char array

    string s = "hello";   //lowercse only
    int  n = s.size();

    int hash[26] = {0};
    for(int i =0; i< n;i++)
    {
         hash[s[i] - 'a'] += 1;
    }

//fetch
char ch;
cin>>ch;

cout<<hash[ch - 'a'];
    





}