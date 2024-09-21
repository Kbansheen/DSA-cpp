
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                                                                              //tc = o(log(n*m))
    int n = matrix.size();  //rows
    int m = matrix[0].size();  //columns number                               //binary search
    int low = 0;
    int high= (n*m - 1);

    while(low<=high)
    {
        int mid = (low+high)/2;

        int row = mid/m;
        int col = mid%m;

        if(matrix[row][col] == target)
        return true;

        else if(matrix[row][col] < target)
        low = mid+1;

        else
        high = mid-1;
    }
    return false;
        
    }
};



//staircase method
class Solution2{
public:	
    int matSearch (vector <vector <int>> &mat, int N, int M, int X)                 
    {
        int i = 0;        // Start at the first row
        int j = M - 1;    // Start at the last column

        while (i < N && j >= 0) {
            if (mat[i][j] == X) {
                return 1;  // Element found
            } else if (mat[i][j] > X) {
                j--;       // Move left
            } else {
                i++;       // Move down
            }
        }
        return 0;  // Element not found
    }
};
