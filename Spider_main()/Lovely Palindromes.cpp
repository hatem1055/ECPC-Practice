/*
    This Code Made by: Mahmoud M Aziz
    Date: 21/7/20222
*/
#include <bits/stdc++.h>
 
using namespace std;
 
 
#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)
#define MAX 101
void Aziz13()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    Aziz13();
    string s1,s2; cin>>s1;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    cout << (s1+s2) << "\n";
}
int main()
{
    solve();
    return 0;
}