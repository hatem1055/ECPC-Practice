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

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve(){
    int n, temp, ans = 0;
    cin >> n;
    for(int m = 1;m>=1;m++){
        temp = n*m + 1;
        if(!isPrime(temp)){
            ans = m;
            break;
        }
    }
    cout << ans << endl;
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