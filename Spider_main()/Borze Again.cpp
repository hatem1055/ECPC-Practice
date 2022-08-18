/*
    This Code Made by: Mahmoud M Aziz
    Date: 18/8/20222
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
    string str; cin>>str;
    string zero=".", one="-.", two="--", ans, num;
    for (int i = 0; i < str.size(); ++i) {
        num+=str[i];
        if(num == zero || num == one || num == two) {
            if (num == zero) ans += "0";
            else if (num == one) ans += "1";
            else if (num == two) ans += "2";
            num = "";
        }
    }
    cout << ans << "\n";
}
int main()
{
    solve();
    return 0;
}