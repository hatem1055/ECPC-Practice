#include <bits/stdc++.h>
using namespace std;

#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define e '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

typedef long long ll;

void solve(){
    int n, j = 1;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        arr[i] = j;
        j++;
    }
    if(n == 1) {
        cout << arr[0] << endl;
    }
    else {
        for (int i = 0; i + 1 < n; i+=2) {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
        if(n % 2 != 0){
            int temp = arr[n-1];
            arr[n-1] = arr[n-2];
            arr[n-2] = temp;
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
}

int main(){
    NadaM
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}