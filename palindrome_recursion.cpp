#include<iostream>
using namespace std;


bool palin(string& name, int i, int j)
{
    //base case
    if(i>j)
    return true;

    if(name[i] != name[j])
    return false;

    else
    return palin(name,i+1,j-1);

}

int main()
{
    string name = "ght";

    bool x = palin(name,0,name.length()-1);

    if(x)
    cout<<"its a palindrome";
    else
    cout<<"not a palindrome";

    return 0 ;

}