#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define e '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

void solve(){
    string s, x = "WUB", y = " ";
    cin >> s;
    s = regex_replace(s, regex(x), y);
    cout << s;
}
int main(){
    NadaM
    int t = 1;
//    cin >> t;
    while(t--)
        solve();
}