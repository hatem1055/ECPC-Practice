#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int y=0;
        for(int i=0;i<n;i++){
            y+=arr[i]-1;
        }
        if(y%2==0)cout<<"maomao90\n";
        else cout<<"errorgorn\n";
    }
return 0;
}
