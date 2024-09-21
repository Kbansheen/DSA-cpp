class Solution {
public:
    int lengthOfLongestSubstring(string s) {                    //brute force  //tc = o(n^2)

        int n = s.length();
        int maxlength = 0;

        for(int i = 0; i<n; i++)
        {
            int hash[256] = {0};

            for(int j = i; j<n; j++)
            {
                if (hash[s[j]] == 1)
                break;

                int len = j-i+1;
                
                maxlength = max(len, maxlength); 
                hash[s[j]] = 1;

            }
           
        }
         return maxlength;
        
    }
};




