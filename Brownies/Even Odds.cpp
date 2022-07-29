#include <bits/stdc++.h>
using namespace std;

#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define YES cout << "YES\n";
#define NO cout << "NO\n";

typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    cout << (k <= (n+1)/2 ? 2*k-1 : 2*(k - (n+1)/2));
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