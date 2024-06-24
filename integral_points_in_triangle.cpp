//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long int InternalCount(long long int p[], long long int q[], long long int r[]) {
        // Function to calculate the area of the triangle
        auto triangleArea = [](long long int x1, long long int y1, long long int x2, long long int y2, long long int x3, long long int y3) -> long long int {
            return abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
        };

        // Function to calculate the number of boundary points using GCD
        auto boundaryPoints = [](long long int x1, long long int y1, long long int x2, long long int y2) -> long long int {
            return __gcd(abs(x2 - x1), abs(y2 - y1)) + 1;
        };

        // Calculate the area of the triangle (multiplied by 2 to keep it integer)
        long long int area2 = triangleArea(p[0], p[1], q[0], q[1], r[0], r[1]);

        // Calculate the number of boundary points
        long long int B = boundaryPoints(p[0], p[1], q[0], q[1])
                        + boundaryPoints(q[0], q[1], r[0], r[1])
                        + boundaryPoints(r[0], r[1], p[0], p[1])
                        - 3;  // Subtract 3 to account for the vertices counted twice

        // Calculate the number of interior points using Pick's Theorem
        long long int I = (area2 - B + 2) / 2;

        return I;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int p[2], q[2], r[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1];
        Solution ob;
        long long int ans = ob.InternalCount(p, q, r);
        cout << ans << "\n";
    }
}
// } Driver Code Ends