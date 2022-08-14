/*
    This Code Made by: Mahmoud M Aziz
    Date: 13/8/20222
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
    testcase(){
        int a,b,l,w; cin>>a>>b;
        l = 2*min(a,b);
        w = max(a,b) + abs(max(a,b)-l);
        l = w = (l+w)/2;
        cout << l*w << "\n";
    }
}
int main()
{
    solve();
    return 0;
}