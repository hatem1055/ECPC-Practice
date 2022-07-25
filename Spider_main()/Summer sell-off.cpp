/*
    This Code Made by: Mahmoud M Aziz
    Date: 24/7/20222
*/
#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)


void Aziz13()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz13();
    int n,f; cin>>n>>f;
    ll sum = 0;
    vector<pair<ll,pair<ll,ll>>> v;
    loop(i,0,n-1){
        ll k,l; cin>>k>>l;
        v.push_back({min(2*k,l)-min(k,l),{k,l}});
    }
    sort(v.begin(), v.end());
    int i=n-1;
    while(f--){
        v[i].second.first*=2;
        i--;
    }
    loop(i,0,n-1){
        sum += min(v[i].second.first, v[i].second.second);
    }
    cout << sum << "\n";
}
int main()
{
    solve();
    return 0;
}