/*
    This Code Made by: Mahmoud M Aziz
    Date: 12/8/20222
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
    int n,t; cin>>n>>t;
    int arr[n];
    bool check=false;
    loop(i,1,n-1) cin>>arr[i];
    for(int i = 1; i < n;){
        if(i+arr[i]==t){
            check = true;
            break;
        }
        i+=arr[i];
    }
    if(check) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    solve();
    return 0;
}