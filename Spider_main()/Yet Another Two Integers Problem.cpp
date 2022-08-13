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
        int a,b,diff;
        cin>>a>>b;
        diff=abs(a-b);
        int tmp = diff/10;
        cout << tmp + (diff-(10*tmp)==0? 0: 1) << "\n";

    }
}
int main()
{
    solve();
    return 0;
}