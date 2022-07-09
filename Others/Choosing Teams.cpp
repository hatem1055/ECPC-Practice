#include<iostream>
using namespace std;
int solve(){
    int n,k;
    cin>>n>>k;
    int y[n];
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    int t=0;
    for(int i=0;i<n;i++){
        int b= 5-y[i];
        if(b>=k){
            t++;
        }
    }
    cout<<t/3<<endl;
}

int main(){
    solve();
}