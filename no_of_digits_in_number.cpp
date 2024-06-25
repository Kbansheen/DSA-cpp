class Solution {
public:
    int countDigits(int num) {

        int cnt = 0;
         int n = num;
        
        while(num != 0)
        {
            int digit = num % 10;
            
            if(digit != 0 && n % digit == 0)
            {
                cnt++;
            }
            
            num = num/10;
            
        }
        return cnt;
        
    }
};