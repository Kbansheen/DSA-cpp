#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {

   
        // Arrays to hold Roman numeral values and their corresponding symbols
        const int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const string rom[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        // Initialize an empty string to build the Roman numeral
        string ans = "";
        
        // Loop through each value in the `val` array
        for (int i = 0; i < 13; i++) {
            // While `num` is greater than or equal to the current value
            while (num >= val[i]) {
                // Append the corresponding Roman numeral symbol to `ans`
                ans += rom[i];
                // Subtract the value from `num`
                num -= val[i];
            }
        }
        // Return the resulting Roman numeral
        return ans;
    }
};

        
  