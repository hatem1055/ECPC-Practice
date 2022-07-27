/*
    This Code Made by: Mahmoud M Aziz
    Date: 27/7/20222
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
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz13();
    testcase(){
        int n; cin>>n;
        ull arr[n], sum=0;
        loop(i,0,n-1) {
            cin >> arr[i];
        }
        sum = arr[0];
        loop(i,1,n-1) sum ^= arr[i];
        if(sum == 0) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
int main()
{
    solve();
    return 0;
}