// Problem Link: https://codeforces.com/contest/1705/problem/C
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main() {
    NadaM
    int t;
    cin >> t;
    while(t--){
        ll n, c, q, l, r;
        cin >> n >> c >> q;
        string s;
        cin >> s;
        vector< pair <ll,ll> > range;
        vector< pair <ll,ll> > query;
        ll start = n + 1, end = n;
        while(c--) {
            cin >> l >> r;
            end += (r - l + 1);
            range.push_back(make_pair(start, end));
            query.push_back(make_pair(l, r));
            start += (r-l+1);
        }
        while(q--){
            ll k;
            cin >> k;
            for(ll i = range.size() - 1;i>=0;i--){
                if(k >= range[i].first && k <= range[i].second){
                    ll gap = k - range[i].first;
                    k = query[i].first + gap;
                }
            }
            cout << s[k-1] << endl;
        }
    }
}