#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
       int n,k; cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       if(k==1) cout<<(n-1)/2<<'\n';
       else{
           int counter=0;
           for(int i=1;i<n-1;i++){
               if(arr[i]>arr[i-1]+arr[i+1]) counter++;
           }
           cout<<counter<<'\n';
       }
    }
    return 0;
}
