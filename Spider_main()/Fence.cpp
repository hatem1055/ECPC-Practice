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
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    Aziz13();
    int n=0,k=0; cin>>n>>k;
    int arr[n];
    loop(i,0,n-1) cin>>arr[i];
    int arr1[n-k+1] = {};
    loop(i,0,k-1) arr1[0]+=arr[i];
    int kValue=arr1[0], kInd=0;
    loop(i,1,n-k){
        arr1[i]+=(arr1[i-1]-arr[i-1]+arr[i+k-1]);
        if(arr1[i] < kValue){
            kValue = arr1[i];
            kInd = i;
        }
    }
    cout << kInd+1 << "\n";
}
int main()
{
    solve();
    return 0;
}