#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define frj(n) for(int j = 0 ; j < n ;j++)
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
#define fileIN  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
using namespace std;
 
int main() {
    kareemS
 
    int t = 1;
   // cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        ll a[n],b[n];
        ll ma = -10e9;
        fr(n){
            cin >> a[i] >> b[i];
            if(a[i]>ma)ma=a[i];
        }
        ll c =0;
        fr(n){
            if(b[i]>=ma)c++;
        }
        cout << c;
    }
}
