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
    ll n;
    int cnt = 0;
    cin >> n;
    while(n > 0){
        if(n % 10 == 7 || n % 10 == 4)
            cnt++;
        n /= 10;
    }
    bool flag = false;
    while(cnt > 0){
        if(cnt % 10 == 7 || cnt % 10 == 4){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
        cnt /= 10;
    }
    if(flag)
        yes
    else
        no
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