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
    int s, sum = 0, num = 9;
    string ans;
    cin >> s;
    while(sum < s){
        sum += num;
        while(sum > s) {
            sum -= num;
            num--;
            sum += num;
        }
        ans += num + '0';
        num--;
    }
    reverse(all(ans));
    cout << ans  << endl;
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