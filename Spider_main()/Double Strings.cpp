/*
    This Code Made by: Mahmoud M Aziz
    Date: 13/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)


void Aziz13()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz13();
    testcase()
    {
       int n; cin >> n; string s[n];
       map<string,int> ss;
       loop(i,0,n-1){
           cin >> s[i];
           ss[s[i]] = 1;
       }
       loop(i,0,n-1){
           int can = 0;
           loop(j,0,s[i].size()){
               string s1 = s[i].substr(0,j);
               string s2 = s[i].substr(j,s[i].size()-j);
               if(ss[s1] == 1 && ss[s2] == 1)
               {
                   can = 1;
                   break;
               }
           }
           cout << can;
       }
       cout << endl;
    }
}
int main()
{
    solve();
    return 0;
}