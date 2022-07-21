/*
    This Code Made by: Mahmoud M Aziz
    Date: 21/7/20222
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
//inline bool isNear(int ind, char egg[], char color){
//    return (color != egg[ind-1] && color != egg[ind-2] && color != egg[ind-3] && color != egg[ind+1] && color != egg[ind+2] && color != egg[ind+3]);
//}
void solve()
{
    Aziz13();
    int n,d,Max_D = 0; cin>>n>>d;
    int arr[n];
    loop(i,0,n-1) cin>>arr[i];
    sort(arr, arr+n);
    loop(i,1,n-1){
        Max_D = max(Max_D, arr[i]-arr[i-1]);
    }
    cout << fixed << setprecision(9) << ((ld)max(arr[0],d-arr[n-1]) > Max_D/2.00? max(arr[0],d-arr[n-1]): Max_D/2.00) << "\n";
}
int main()
{
    solve();
    return 0;
}

