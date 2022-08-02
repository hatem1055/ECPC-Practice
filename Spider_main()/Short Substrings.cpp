/*
    This Code Made by: Mahmoud M Aziz
    Date: 2/8/20222
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
        string s;
        cin>>s;
        for(int i = 1; i < s.size()-2;){
            if(s[i] != s[i+1]){
                i++;
                continue;
            }
            s.replace(i,1,"");
            i++;
        }
        cout << s << "\n";
    }
}
int main()
{
    solve();
    return 0;
}