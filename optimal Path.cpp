#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
        long long int sum=0;
        int n,m;
        cin>>n>>m;
        for(int j=1;j<=m;j++)
        {
            sum+=j;
        }
        for(int j=2;j<=n;j++)
        {
            sum+=m*j;
        }
        cout<< sum<<'\n';
    }
    return 0;
}
