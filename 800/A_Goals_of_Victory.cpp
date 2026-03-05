#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        long long sum = 0;

        for (int i = 0; i < n - 1; i++) {
            cin >> x;
            sum += x;
        }

        cout << -sum << "\n";
    }
}