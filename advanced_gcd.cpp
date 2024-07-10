#include <bits/stdc++.h>
using namespace std;

int advancedGcd(int a, string b) {
    int modB = 0;

    // Compute B % a
    for (char digit : b) {
        modB = (modB * 10 + (digit - '0')) % a;
    }

    // Calculate GCD using Euclidean Algorithm
    while (a != 0 && modB != 0) {
        if (a > modB) {
            a = a % modB;
        } else {
            modB = modB % a;
        }
    }

    return (a == 0) ? modB : a;
}




