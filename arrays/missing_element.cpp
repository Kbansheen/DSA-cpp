#include<vector>
using namespace std;

class solution{
int missingNumber(int n, vector<int>& arr) {

       int sum = n*(n+1)/2;
       int arraySum = 0;
       
       for(int i =0; i<n-1;i++)
       {
          arraySum += arr[i]; 
       }
       
       int miss = sum - arraySum;
       return miss;
}
};
       