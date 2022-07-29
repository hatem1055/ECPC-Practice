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
    string tmp;
    int k,r,c=1; cin>>k>>r;
    tmp = to_string(k);
    while((tmp[tmp.size()-1]-'0')-r != 0 && (tmp[tmp.size()-1]-'0') != 0){
        c++;
        tmp = to_string(k*c);
 
    }
    cout << c << "\n";
}
int main()
{
    solve();
    return 0;
}
