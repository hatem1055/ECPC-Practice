/*
    This Code Made by: Mahmoud M Aziz
    Date: 29/7/20222
*/
#include <bits/stdc++.h>

using namespace std;



#define ll long long
#define fi first
#define se second
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
    ll n,q; cin>>n;
    ll arr[n],price[100001]={};
    loop(i,0,n-1){
        cin >> arr[i];
        price[arr[i]]++;
    }
    loop(i,1,100000) price[i] += price[i-1];
    cin>>q;
    while(q--){
        ll m; cin>>m;
        if(m > 100000) cout << n << "\n";
        else cout << price[m] << "\n";
    }
}
int main()
{
    solve();
    return 0;
}