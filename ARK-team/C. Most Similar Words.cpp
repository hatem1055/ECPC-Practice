#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> m >> n;
        string a[m];
        fr(m){
            cin >> a[i];
        }
        int mi =10e6;
        for(int i = 0 ; i <m-1;i++){
            for(int j=i+1 ; j<m;j++){
                int diff =0;
                for(int l = 0 ; l<n;l++){
                    diff += abs(a[i][l]-a[j][l]);
                }
                mi = min(mi,diff);
            }
        }
        cout << mi << '\n';
    }
}
