#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i];
    bool error{false};
    int pointer = 1;
    while (pointer<n&&!error){
        if(a[pointer]<a[pointer-1]){
            pointer++;
            while (pointer<n){
                if(a[pointer]>a[pointer-1]){
                    error = true;
                    break;
                }
                pointer++;
            }
        }
        pointer++;
    }
    if(error) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    DedSec;
    int t; cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
