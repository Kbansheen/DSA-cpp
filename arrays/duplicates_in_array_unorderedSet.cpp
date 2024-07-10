#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> arr) {       
    vector<int> ans;
    unordered_set<int> seen; // To keep track of seen elements

    for (int num : arr) {
        if (seen.find(num) == seen.end()) { // If the element is not already in the set
            ans.push_back(num); // Add it to the answer
            seen.insert(num); // Mark it as seen
        }
    }

    return ans;
}
