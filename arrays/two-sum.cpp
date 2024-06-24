

#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            
            int y = target - *i;
            auto j = find(i+1, nums.end(),y);
            if(j != nums.end())
            {
                ans.push_back(i - nums.begin());
                ans.push_back(j - nums.begin());
                break;

            }
        }
        return ans;
    }



};