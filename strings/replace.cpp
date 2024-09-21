#include<bits/stdc++.h>
using namespace std;


void replaceS(string &str)
{
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] == 'a')
        {
            str[i] = 'b';
        }
        else if(str[i] == 'b')
        {
             str[i] = 'a';
        }
    }
     cout<<str;
}

int main()
{
      string str = "";
      cout<<"enter";
      cin>>str;
      replaceS(str);
}