#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<pair<int,char>> freq(26);

        for(char c: s) freq[c-'a'].first++;

        for(int i=0;i<26;i++) freq[i].second = 'a'+i;

        sort(freq.rbegin(), freq.rend());

        int best_k = 1;
        int best_keep = -1;

        for(int k=1;k<=26;k++){
            if(n%k) continue;

            int target = n/k;

            int keep = 0;
            for(int i=0;i<k;i++)
                keep += min(freq[i].first, target);

            if(keep > best_keep){
                best_keep = keep;
                best_k = k;
            }
        }

        int target = n/best_k;

        vector<int> need(26,0);

        // characters we will use
        for(int i=0;i<best_k;i++)
            need[freq[i].second - 'a'] = target;

        string ans = s;
        vector<int> extra;

        // keep what we can
        for(int i=0;i<n;i++){
            int c = s[i]-'a';
            if(need[c] > 0)
                need[c]--;
            else
                extra.push_back(i);
        }

        // fill remaining requirements
        for(int c=0;c<26;c++){
            while(need[c] > 0){
                int pos = extra.back();
                extra.pop_back();
                ans[pos] = 'a'+c;
                need[c]--;
            }
        }

        cout << n - best_keep << "\n";
        cout << ans << "\n";
    }
}