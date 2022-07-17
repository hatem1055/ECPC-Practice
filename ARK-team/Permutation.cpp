#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;cin>>n;
        cout<<"2\n";
        for(int i=1;i<n+1;i++){
            if(i%2==1){
                for(int j=i;j<n+1;j*=2){
                    cout<<j<<' ';
                }
            }
        }
        cout<<'\n';
    }
return 0;
}
