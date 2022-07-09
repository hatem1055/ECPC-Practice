#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        vector<int>used(n+1,0);
        for(int i=1;i<=n/2;i++){
            int j = i;
            while(j<=n && !used[j]){
                cout<<j<<" ";
                used[j]++;
                j*=2;
            }
        }
        for(int i=1;i<=n;i++){
            if(!used[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
