/*
    This Code Made by: Mahmoud M Aziz
    Date: 3/8/20222
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
        int n,k, sum = 0; cin>>n>>k;
        int arr1[n],arr2[n];
        loop(i,0,n-1){
            cin >> arr1[i];
            sum += arr1[i];
        }
        loop(i,0,n-1) cin >> arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        int m=0,l=n-1;
        loop(i,0,k-1){
            if(arr2[l] <= arr1[m]) break;
            sum -= arr1[m];
            sum += arr2[l];
            l--; m++;
        }
        cout << sum << "\n";
    }

}
int main()
{
    solve();
    return 0;
}