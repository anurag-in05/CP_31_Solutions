#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n,m; cin>>n>>m;
        string x,s; cin>>x>>s;
        for(int i = 0; i <= 6; i++) {
            if(x.find(s) != string::npos) { // gpt syntax
                cout << i << "\n";
                break;
            }

            if(i == 6) {
                cout << -1 << "\n";
                break;
            }

            x += x;
        }
    }
}