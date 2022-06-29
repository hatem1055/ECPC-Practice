#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
       int x,y; cin>>x>>y;
       if(x>y || y%x!=0) cout<<"0 0\n";
       else if(x==y) cout<< "1 1\n";
       else cout<< "1 "<< y/x<< '\n';
    }
    return 0;
}
