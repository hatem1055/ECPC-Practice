// https://codeforces.com/contest/1702/problem/C

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        ll u[n];
        map <ll,pair<ll,ll>> pre;
        for(ll i =0;i<n;i++){
            cin >> u[i];
            if( pre[u[i]].second==0)pre[u[i]]={i+1,i+1};
            else pre[u[i]]={min(pre[u[i]].first,i+1),max(pre[u[i]].second,i+1)};
 
        }
 
        for(int i =0;i<k;i++){
            ll a,b;
            cin >> a>> b;
            if(pre[b].second>=pre[a].first&&pre[b].second!=0&&pre[a].first!=0) cout << "YES\n";
            else cout << "NO\n";
        }
 
    }
    return 0;
 
}