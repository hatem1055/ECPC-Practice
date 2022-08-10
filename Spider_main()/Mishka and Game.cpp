/*
    This Code Made by: Mahmoud M Aziz
    Date: 10/8/20222
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
    int n, c_m=0, c_c=0; cin>>n;
    loop(i,0,n-1){
        int a,b;
        cin>>a>>b;
        if(a>b) c_m++;
        else if(a<b) c_c++;
    }
    if(c_m>c_c) cout << "Mishka\n";
    else if(c_m<c_c) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
}
int main()
{
    solve();
    return 0;
}