/*
    This Code Made by: Mahmoud M Aziz
    Date: 15/8/20222
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
    string num; cin>>num;
    if(num[0] != '-') cout << num << endl;
    else{
        if(num[num.size()-1]-'0' >= num[num.size()-2]-'0')
            num.replace(num.size()-1,1,"");
        else
            num.replace(num.size()-2,1,"");
        if(num[1] == '0') cout << 0 << endl;
        else cout << num << endl;
    }
}
int main()
{
    solve();
    return 0;
}