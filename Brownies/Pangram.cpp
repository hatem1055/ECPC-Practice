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
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(all(s), s.begin(),::tolower);
    set <char> unique;
    for(char i: s){
        unique.insert(i);
    }
    if(unique.size() == 26)
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