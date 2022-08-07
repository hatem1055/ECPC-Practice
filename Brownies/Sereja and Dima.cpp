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

void solve() {
    int n, temp, s = 0, d = 0;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int j = n - 1, i = 0;
    for(int k = 0;k<n;k++){
        if(arr[i] > arr[j]){
            temp = arr[i];
            i++;
        }
        else if(arr[i] <= arr[j]){
            temp = arr[j];
            j--;
        }
        if(k % 2 == 0)
            s += temp;
        else
            d += temp;
    }
    cout << s << ' ' << d;
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