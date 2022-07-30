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
    int arr[3];
    loop(i,0,2) cin >> arr[i];
    sort(arr,arr+3);
    cout << (arr[1]-arr[0])+(arr[2]-arr[1]) << "\n";
}
int main()
{
    solve();
    return 0;
}