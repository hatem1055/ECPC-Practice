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
    int n, m, k, cnt1 = 0, cnt2 = 0, i = 0, j = 0;
    cin >> n >> m >> k;
    string a, b, c;
    cin >> a >> b;
    sort(all(a));
    sort(all(b));
    while(i < a.length() && j < b.length()){
        if(a[i] < b[j]){
            if(cnt1 < k){
                c += a[i];
                i++;
                cnt1++;
                cnt2 = 0;
            }
            else{
                c += b[j];
                j++;
                cnt2++;
                cnt1 = 0;
            }
        }
        else{
            if(cnt2 < k){
                c += b[j];
                j++;
                cnt2++;
                cnt1 = 0;
            }
            else{
                c += a[i];
                i++;
                cnt1++;
                cnt2 = 0;
            }
        }
    }
    cout << c << endl;
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