/*
    This Code Made by: Mahmoud M Aziz
    Date: 5/8/20222
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
    int n, maxi=0, sum=0;
    cin >> n;
    int arr[n];
    loop(i,0,n-1){
        cin >> arr[i];
        if(maxi < arr[i]) maxi = arr[i];
    }
    loop(i,0,n-1) sum += (maxi-arr[i]);
    cout << sum << endl;

}
int main()
{
    solve();
    return 0;
}