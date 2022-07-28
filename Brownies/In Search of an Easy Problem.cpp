#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

void solve(){
    int n, num;
    string ans = "EASY";
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> num;
        if(num == 1){
            ans = "HARD";
            break;
        }
    }
    cout << ans << endl;
}
int main(){
    NadaM
    int t = 1;
//    cin >> t;
    while(t--)
        solve();
}