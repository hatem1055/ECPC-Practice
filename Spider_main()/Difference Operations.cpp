/*
    This Code Made by: Mahmoud M Aziz
    Date: 16/7/20222
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
        int n; cin >> n;
        int arr[n]; bool flag = true;
        loop(i, 0, n-1) cin >> arr[i];
        loop(i, 1, n-1){
            if(arr[i] % arr[0] != 0){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
int main()
{
    solve();
    return 0;
}