#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int mn=*min_element(arr,arr+n);
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>mn)
            {
                sum+=(arr[j]-mn);
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}
