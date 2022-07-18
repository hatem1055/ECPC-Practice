/*
    This Code Made by: Mahmoud M Aziz
    Date: 18/7/20222
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
        int n,m; cin>>n>>m;
        int arr[n];
        loop(i,0,n-1) cin>>arr[i];
        stringstream ss; string s;
        ss << setw(m) << setfill('B') << "";
        ss >> s;
        loop(i,0,n-1){
            int maxi = max(arr[i]-1, m-arr[i]);
            int mini = min(arr[i]-1, m-arr[i]);
            if(s[mini] != 'A') s[mini] = 'A';
            else s[maxi] = 'A';
        }
        cout<<s<<endl;
    }
}
int main()
{
    solve();
    return 0;
}