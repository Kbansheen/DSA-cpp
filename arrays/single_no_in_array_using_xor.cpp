#include <bits/stdc++.h> 
using namespace std;
int occursOnce(vector<int> &a, int n){     //optimised  = tc = O(n) , sc = O(1)

int Xor = 0;
for(int i =0; i<n; i++)
{
	Xor = Xor^a[i];
}

return Xor;
        
   
	
}
