/*
    This Code Made by: Mahmoud M Aziz
    Date: 14/7/20222
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
    int n ,m ,a ,b;
    cin >> n >> m >> a >> b;
    if(b/(m*1.00) >= a) cout << n*a << endl;
    else
    {
        if (m >= n) cout << (b > n*a? n*a: b) << endl;
        else cout << (n / m) * b + (n % m == 0 ? 0 : (b >= (n % m) * a ? (n % m) * a : b)) << endl;
    }
}
int main()
{
    solve();
    return 0;
}
