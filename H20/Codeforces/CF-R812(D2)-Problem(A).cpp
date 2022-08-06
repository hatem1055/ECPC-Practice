#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    DedSec;
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int sum=0;
        int sX{INT_MAX},sY{INT_MAX},bX{-200},bY{-200};
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            sX = min(sX,a);
            sY = min(sY,b),
            bX = max(bX,a);
            bY = max(bY,b);
        }
        if(bY<0) bY=0;
        if(bX<0) bX=0;
        if(sX>0) sX=0;
        if(sY>0) sY=0;
        cout<<abs(sX)*2+abs(bX)*2+abs(sY)*2+abs(bY)*2<<endl;
    }
    return 0;
}
