#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main(){
    DedSec
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m>n){
        if(a*n>b){
            cout<<b;
        }else{
            cout<<a*n;
        }
        return 0;
    }
    if(b<a*m){
        if(n%m==0){
            cout<<b * (n/m);
        }else{
            int result = b * (n/m);
            int remainingRides = n%m;
            result += min(remainingRides*a,b);
            cout<<result;
        }
    }else{
        cout<<a*n;
    }
 
    return 0;
}
