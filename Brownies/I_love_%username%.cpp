#include <bits/stdc++.h>
using namespace std;

#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";

typedef long long ll;

void solve(){
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    bool small = false;
    bool large = false;
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++) {
            if (arr[i] < arr[j])
                small = true;
            else {
                small = false;
                break;
            }
        }
        if(small)
            cnt++;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++) {
            if (arr[i] > arr[j])
                large = true;
            else {
                large = false;
                break;
            }
        }
        if(large)
            cnt++;
    }
    cout << cnt << endl;
}


int main(){
    NadaM
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
//    cin >> t;
    while(t--)
        solve();
}