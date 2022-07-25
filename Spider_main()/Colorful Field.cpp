/*
    This Code Made by: Mahmoud M Aziz
    Date: 25/7/20222
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
    int n,m,k,t; cin>>n>>m>>k>>t;
    vector<pair<ll,ll>> v;
    loop(i,1,k){
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    loop(i,1,t){
        int j=0;
        pair<ll,ll> tmp; cin>>tmp.first>>tmp.second;
        while(v[j] < tmp && j < k){
            j++;
        }
        if(j < k && v[j] == tmp) cout << "Waste\n";
        else{
            ll y = j, x = (tmp.first-1)*m+tmp.second-1;
            if((x-y)%3 == 0) cout << "Carrots\n";
            else if((x-y)%3 == 1) cout << "Kiwis\n";
            else if((x-y)%3 == 2) cout << "Grapes\n";
        }
    }
}
int main()
{
    solve();
    return 0;
}