#include<iostream> 
#include<vector>
using namespace std;

class solution{
public:
void solve(string str, string output, vector<string>& ans, int i)
{
	if(i>=str.length())
	{
		if(output.length() > 0)
		{
			ans.push_back(output);
		}
		return;
	}

	//exclude
	solve(str, output, ans, i+1);

	//include
	int e = str[i];
	output.push_back(e);
	solve(str,output, ans, i+1);
}
vector<string> subsequences(string str){
	
	string output = "";
	vector<string> ans;
	int i = 0;
	solve(str, output, ans, i);
	return ans;
	
}
};
