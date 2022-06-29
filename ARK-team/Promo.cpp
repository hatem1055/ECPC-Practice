    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        int n,q;
        cin>>n>>q;
        int arr[n];
        long long int arr_cml[n+1];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        arr_cml[0]=0;
        for(int j=0;j<n;j++)
        {
            arr_cml[j+1]=arr_cml[j]+arr[j];
        }
        for(int j=0;j<q;j++)
        {
            int x,y;
            cin>>x>>y;
            cout<<arr_cml[n-x+y]-arr_cml[n-x]<<'\n';
        }
        return 0;
    }
