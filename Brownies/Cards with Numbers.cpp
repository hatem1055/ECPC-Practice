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
    int n, num;
    cin >> n;
    vector <pair<int,int>> cards;
    vector <pair<int,int>> pairs;
    for(int i = 0;i<2*n;i++){
        cin >> num;
        cards.pb(mp(num, i+1));
    }
    sort(all(cards));
    for(int i = 0;i<2*n;i++){
        if(cards[i].fi == cards[i+1].fi){
            pairs.pb(mp(cards[i].se, cards[i+1].se));
            i++;
        }
    }
    if(pairs.size() != n)
        cout << -1 << endl;
    else {
        for(int i = 0;i<n;i++){
            cout << pairs[i].fi << ' ' << pairs[i].se << endl;
        }
    }
}

int main(){
    NadaM
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
//    cin >> t;
    while(t--)
        solve();
}