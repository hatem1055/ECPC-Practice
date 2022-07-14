#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int q;
    sort(arr,arr+n);
    cin>>q;
    for(int i=0;i<q;i++){
        int x,ans;
        cin>>x;
        ans= upper_bound(arr,arr+n,x)-arr;
        cout<<ans<<endl;




    }
}




