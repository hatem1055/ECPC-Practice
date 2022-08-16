/**
████████▄     ▄████████ ████████▄     ▄████████    ▄████████  ▄████████
███   ▀███   ███    ███ ███   ▀███   ███    ███   ███    ███ ███    ███
███    ███   ███    █▀  ███    ███   ███    █▀    ███    █▀  ███    █▀
███    ███  ▄███▄▄▄     ███    ███   ███         ▄███▄▄▄     ███
███    ███ ▀▀███▀▀▀     ███    ███ ▀███████████ ▀▀███▀▀▀     ███
███    ███   ███    █▄  ███    ███          ███   ███    █▄  ███    █▄
███   ▄███   ███    ███ ███   ▄███    ▄█    ███   ███    ███ ███    ███
████████▀    ██████████ ████████▀   ▄████████▀    ██████████ ████████▀

 */
#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    if(k==0||((k+2)%4!=0 && k%2==0)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    if(k%2!=0){
        for(int i=1;i<=n;i+=2) cout<<i<<" "<<i+1<<endl;
    }else{
        map<int,int>used{};
        int start = 1;
        int i = 1;
        for(;i<n/2;i+=2){
            cout<<i<<" "<<start*4<<endl;
            used[4*start]=1;
            start++;
        }
        for(int j=2;j<=n;j+=2){
            if(used[j]) continue;
            cout<<j<<" "<<i<<endl;
            i+=2;
        }
    }
}

int main() {
    DedSec;
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}
