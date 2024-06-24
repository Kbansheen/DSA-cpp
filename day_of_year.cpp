

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:

bool isLeapYear(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year%400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
    int dayOfYear(string date) {

        int year = stoi(date.substr(0,4));
        int month =  stoi(date.substr(5,2));
        int day =  stoi(date.substr(8,2));

        int cnt = 0;

        vector<int> monthsOfYear = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if(isLeapYear(year))
        {
            monthsOfYear[1] = 29;
        }

        for(int i =0; i<month -1; i++)
        {
              cnt += monthsOfYear[i];
        }

        cnt += day;
        return cnt;

        
    }
};