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
    int n;cin>>n;
    string matrix[n];
    for(int i=0;i<n;i++) cin>>matrix[i];
    int operations =0;
    for(int i=0;i<n/2;i++){
        int ones{0};
        for(int j=i;j<n-(i+1);j++){
            int a = matrix[i][j]-'0';
            int b = matrix[n-(j+1)][i]-'0';
            int c = matrix[j][n-(i+1)]-'0';
            int d = matrix[n-(i+1)][n-(j+1)]-'0';
            ones = a+b+c+d;
            if(ones!=4 && ones!=0) operations+= min(ones,4-ones);
        }
    }
    cout<<operations<<endl;
}


int main() {
    DedSec;
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
