#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int arr[4];
        int n0=0,n1=0;
        for(int i=0;i<4;i++){
            if(i==1){
                cin>>arr[i];
                cin.ignore();
            }else cin>>arr[i];
            if(arr[i]==0)n0++;
            else n1++;
        }
        if(n1==4)cout<<"2\n";
        else if(n0==4)cout<<"0\n";
        else cout<<"1\n";
    }
return 0;
}
