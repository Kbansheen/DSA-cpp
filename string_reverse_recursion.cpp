#include <iostream>
using namespace std;

void rev(string& str, int i, int j)
{
	//base case
	if(i > j)
	return;

	swap(str[i], str[j]);
	i++;
	j--;
	rev(str, i,j);
}
string reverseString(string& str)
{
	int i = 0;
	int j = str.length()-1;
	rev(str,i,j);
	return str;

}

int main()
{
    string str;
    cout<<"enter the string";
    cin>>str;
    reverseString( str);
    cout<<str;
}