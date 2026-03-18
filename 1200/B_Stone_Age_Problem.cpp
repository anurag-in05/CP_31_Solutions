#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll sum = accumulate(a.begin(), a.end(), 0LL);

    vector<int> last_update(n, 0);
    int global_time = 0;
    ll last_global = -1;

    while (q--) {
        int t;
        cin>>t;
        if(t == 1){
            int i;
            ll x;
            cin>>i>>x;
            i--; 
            ll current;

            if (last_update[i] < global_time)
                current = last_global;
            else
                current = a[i];

            sum = sum - current + x;

            a[i] = x;
            last_update[i] = global_time;
        } 
        else {
            ll x;
            cin >> x;

            sum = 1LL * n * x;
            last_global = x;
            global_time++;
        }

        cout << sum << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}