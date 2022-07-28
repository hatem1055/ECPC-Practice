#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define e '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

void solve(){
    int n, subArray = 0;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i] == 0 && arr[i+1] != 0)
            subArray++;
    }
    if(arr[0] != 0)
        subArray++;
    cout << min(subArray,2) << endl;
}
int main(){
    NadaM
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}