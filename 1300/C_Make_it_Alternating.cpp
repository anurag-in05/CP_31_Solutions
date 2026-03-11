#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
const int N = 200005;

long long fact[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fact[0] = 1;
    for(int i = 1; i < N; i++)
        fact[i] = fact[i-1] * i % MOD;

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        long long ways = 1;
        int ops = 0;

        for(int i = 0; i < s.size();) {
            int j = i;

            while(j < s.size() && s[j] == s[i]) j++;

            int len = j - i;

            ops += len - 1;
            ways = ways * len % MOD;

            i = j;
        }

        ways = ways * fact[ops] % MOD;

        cout << ops << " " << ways << "\n";
    }
}