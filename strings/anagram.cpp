#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {
        
        if(a.length() != b.length())
        return false;

        unordered_map<char,int> mpp;
        
        for(char c : a)
        {
            mpp[c]++;
        }
        
        for(char c : b)
        {
           mpp[c]--;
           
           if(mpp[c] < 0)
           return false;
        }
        return true;
    }
};