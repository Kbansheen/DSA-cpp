#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int j = 2; j <= N; j++) {
        int cnt = 0;
        for (int i = 1; i <= sqrt(j); i++) {
            if (j % i == 0) {
                cnt++;
                if (i != j / i) {
                    cnt++;
                }
            }
        }
        if (cnt == 2) {
            cout << j << endl;
        }
    }

    return 0;
}
