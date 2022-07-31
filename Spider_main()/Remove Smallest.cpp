/*
    This Code Made by: Mahmoud M Aziz
    Date: 31/7/20222
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
        int n; cin>>n;
        int arr[n];
        loop(i,0,n-1) cin>>arr[i];
        if(n==1) cout << "YES\n";
        else{
            bool check = true;
            sort(arr,arr+n);
            loop(i,0,n-2){
                if(abs(arr[i]-arr[i+1]) > 1){
                    check = false;
                    break;
                }
            }
            if(check) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
int main()
{
    solve();
    return 0;
}