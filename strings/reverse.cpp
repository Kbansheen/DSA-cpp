#include<bits/stdc++.h>
using namespace std;


bool reverseS(string str)
{
    string s1 = str;
    int n= str.length();
    for(int i=0;i<n/2;i++)
    {
        swap(str[i],str[n-1-i]);
    }

    if(str == s1)
    return true;

    else
    return false;

}

int main()
{
    string str = "";
    cin>>str;
    
    bool x = reverseS(str);
if(x)
cout<<"palindrome";

else
cout<<"not";
    return 0;
}