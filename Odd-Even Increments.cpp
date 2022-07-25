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
    int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    cin >> n;
    int even[n];
    int odd[n];
    for(int i = 0;i<n;i++){
        cin >> even[i];
        odd[i] = even[i];
    }
    if(all_of(even, even + n, [](int i) { return i % 2 == 0; }))
        YES
    else if(all_of(odd, odd + n, [](int i) { return i % 2 != 0; }))
        YES
    else {
        for (int i = 0; i < n; i += 2) {
            even[i] += 1;
        }
        for (int i = 1; i < n; i += 2) {
            odd[i] += 1;
        }
        for (int i = 0; i < n; i++) {
            if (even[i] % 2 == 0)
                c1++;
            else
                c2++;
            if (odd[i] % 2 == 0)
                c3++;
            else
                c4++;
        }
        if (c1 == n || c2 == n || c3 == n || c4 == n)
            YES
        else
            NO
    }
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