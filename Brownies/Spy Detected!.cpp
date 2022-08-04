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
    int n, ans = 0;
    cin >> n;
    vector <int> num(n);
    for(int i= 0;i<n;i++){
        cin >> num[i];
    }
    for(int i = 0;i<n;i++){
        if(count(all(num), num[i]) == 1) {
            ans = i;
            break;
        }
    }
    cout << ans + 1 << endl;
}

int main(){
    NadaM
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}