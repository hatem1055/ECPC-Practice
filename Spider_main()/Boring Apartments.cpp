/*
    This Code Made by: Mahmoud M Aziz
    Date: 17/8/20222
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
        string x; cin>>x;
        int sum=0, i = x.size();
        sum = (x[0]-'0'-1)*10;
        while(i!=0){
            sum+=i;
            i--;
        }
        cout << sum << "\n";
    }
}
int main()
{
    solve();
    return 0;
}