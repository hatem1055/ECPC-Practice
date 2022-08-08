/*
    This Code Made by: Mahmoud M Aziz
    Date: 8/8/20222
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
    int arr[4];
    loop(i,0,3) cin>>arr[i];
    sort(arr, arr+4);
    cout << arr[3]-arr[0] << " " << arr[3]-arr[1] << " " << arr[3]-arr[2] << "\n";
}
int main()
{
    solve();
    return 0;
}