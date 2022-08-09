/*
    This Code Made by: Mahmoud M Aziz
    Date: 9/8/20222
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
bool isDegenerate(ll x, ll y, ll z){
    return (x+y>z && x+z>y && y+z>x);
}
void solve()
{
    Aziz13();
    int n; cin>>n;
    ll arr[n];
    bool check=false;
    loop(i,0,n-1) cin>>arr[i];
    sort(arr, arr+n);
    loop(i,0,n-3){
        if(isDegenerate(arr[i],arr[i+1],arr[i+2])){
            check = true;
            break;
        }
    }
    if(check) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    solve();
    return 0;
}