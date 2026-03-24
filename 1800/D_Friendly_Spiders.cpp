#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXA = 300000;
int spf[MAXA + 1];

void sieve() {
    for(int i=1;i<=MAXA;i++) spf[i] = i;
    for(int i=2;i*i<=MAXA;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=MAXA;j+=i){
                if(spf[j]==j) spf[j] = i;
            }
        }
    }
}

// get unique prime factors
vector<int> get_primes(int x) {
    vector<int> res;
    while (x > 1) {
        int p = spf[x];
        res.push_back(p);
        while (x % p == 0) x /= p;
    }
    return res;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;cin>>n;

    vector<int> a(n + 1);
    for(int i=1;i<=n;i++)cin>>a[i];

    int s,t;cin>>s>>t;

    if(s==t){
        cout<<1<<"\n"<<s<<"\n";
        return 0;
    }

    // prime -> indices
    unordered_map<int, vector<int>> mp;
    // nlogn
    for(int i=1;i<=n;i++){
        vector<int> primes = get_primes(a[i]);
        for(int p:primes){
            mp[p].push_back(i);
        }
    }

    // BFS
    queue<int> q;
    vector<int> dist(n + 1, -1);
    vector<int> parent(n + 1, -1);

    q.push(s);
    dist[s] = 0;

    // 
    unordered_set<int> used_prime;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int p : get_primes(a[node])){ // 
            if(used_prime.count(p)) continue;
            used_prime.insert(p);

            for(int nei : mp[p]){
                if(dist[nei] == -1){
                    dist[nei] = dist[node] +1;
                    parent[nei] = node;
                    q.push(nei);
                }
            }
        }
    }
    if(dist[t] == -1){
        cout << -1 << "\n";
        return 0;
    }

    vector<int> path;
    int cur = t;
    while (cur != -1) {
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(), path.end());
    cout<<path.size()<<"\n";
    for (int x : path) cout << x << " ";
    cout << "\n";
    return 0;
}