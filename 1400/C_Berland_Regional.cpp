#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
#define pb push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define yn(f) f?cout<<"YES\n":cout<<"NO\n"
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void solve() {
		int n; 
		cin>>n;

		vector<int> u(n), s(n);
		for (int i = 0; i < n; i++) cin >> u[i]; 
		for (int i = 0; i < n; i++) cin >> s[i]; 

		vector<vector<int>> skills(n); 
		for (int i = 0; i < n; i++) {
			skills[u[i] - 1].push_back(s[i]); 
		}

		for (auto &v : skills) {
			sort(v.begin(), v.end()); 
		}

		vector<vector<long long>> pre(n, vector<long long>(1, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < (int)skills[i].size(); j++) {
				pre[i].push_back(pre[i].back() + skills[i][j]); 
			}
		}

		vector<long long> ans(n + 1);
		for (int i = 0; i < n; i++) {
			int nums = (int)skills[i].size(); // number of students in this university
			for (int k = 1; k <= nums; k++) {
				ans[k] += pre[i].back() - pre[i][nums % k];
			}
		}

		for (int i = 1; i <= n; i++) cout << ans[i] << ' '; // print strengths for all k from 1..n
		cout << '\n';
}

int main() {
		cin.tie(0);
		cout.tie(0);
		cin.sync_with_stdio(false); // fast I/O

		int t; 
		cin >> t; // number of test cases
		while (t--) {
			solve();
		}
}

/*
Time Complexity (TC): O(nlogn)
Space Complexity (SC): O(n)
*/
