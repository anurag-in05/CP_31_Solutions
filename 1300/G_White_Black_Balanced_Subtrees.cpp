#include <bits/stdc++.h>
using namespace std;


int ans = 0;
int dfs(int node, vector<vector<int>>& adj, string& s) {
	if (adj[node].size() == 0) {
		return s[node - 1] == 'W' ? 1 : -1;
	}	
	int count = 0;	
	for (auto child : adj[node]) {
		count += dfs(child, adj, s);
	}
	
	count += (s[node - 1] == 'W' ? 1 : -1);
	
	// If the subtree is balanced, increment the answer
	if (count == 0) {
		ans++;
	}
	
	// Return the balance count of the current subtree
	return count;
}

int main() {
	int t; // Number of test cases
	cin >> t;
	while (t--) {
		ans = 0; // Reset the answer for each test case
		int n; // Number of vertices in the tree
		cin >> n;
		
		// Adjacency list to represent the tree
		vector<vector<int>> adj(n + 1, vector<int>());
		
		// Read the parent-child relationships
		for (int i = 0; i < n - 1; i++) { // O(n)
			int temp;
			cin >> temp;
			adj[temp].push_back(i + 2);
		}
		
		// Read the color string
		string s;
		cin >> s;
		
		// Perform DFS starting from the root node
		dfs(1, adj, s); // O(n)
		
		// Output the number of balanced subtrees
		cout << ans << endl;
	}
}

// Time Complexity (TC): O(n)
// Space Complexity (SC): O(n)
