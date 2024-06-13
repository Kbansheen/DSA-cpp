
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
void solve(string digits, string out, vector<string>& ans, int index, string mappings[])
{
    //base case
    if(index>=digits.length())
    {
        ans.push_back(out);
        return;
    }
     int number = digits[index] - '0';
     string value = mappings[number];

     for(int i =0; i<value.length(); i++)
     {
        out.push_back(value[i]);
        solve(digits, out, ans, index+1, mappings);
        out.pop_back();
     }

}
    vector<string> letterCombinations(string digits) {
        string out = "";
        int index = 0;
        vector<string> ans;

        string mappings[] = {"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        if(digits.length() == 0)
        return ans;
        solve(digits,out, ans, index, mappings);
        return ans;


        
    }
};