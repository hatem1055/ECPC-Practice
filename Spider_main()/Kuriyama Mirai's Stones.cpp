/*
    This Code Made by: Mahmoud M Aziz
    Date: 21/7/20222
*/
#include <bits/stdc++.h>
 
using std::cout;
using std::cin;
 
 
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
    int n,m; cin>>n;
    std::vector<ull> v(n);
    std::vector<ull> v1(n);
    loop(i,0,n-1) {
        cin >> v[i];
        v1[i] = v[i];
    }
    std::sort(v1.begin(), v1.end());
    cin>>m;
    loop(i,1,n-1){
        v[i] += v[i-1]; v1[i] += v1[i-1];
    }
    while(m--){
        int t,l,r; cin>>t>>l>>r;
        if(t == 1) cout << v[r-1] - (l == 1? 0: v[l-2]) << "\n";
        else cout << v1[r-1] - (l == 1? 0: v1[l-2]) << "\n";
    }
}
int main()
{
    solve();
    return 0;
}