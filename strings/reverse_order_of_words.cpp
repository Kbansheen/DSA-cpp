
#include<bits/stdc++.h>
using namespace std;                                //2 pointer   sc = o(1)

class Solution {
public:
    string reverseWords(string s) {

        //reverse whole string
        reverse(s.begin(), s.end());

        int i = 0;
        //l and r pointers to reverse individual words
        int l = 0 ,  r = 0;
        int n = s.length();

        while(i<n)
        {
            while(i<n && s[i] != ' ')   //jb tk i ko space nhi milta
            {
                  s[r] = s[i];
                  i++;
                  r++;  
            }

            if(l<r)
            {
                reverse(s.begin()+l, s.begin()+r);
                s[r] = ' ';
                r++;

                l = r;
            }

            i++;
        }

        s = s.substr(0, r-1);

        return s;
        
    }
};