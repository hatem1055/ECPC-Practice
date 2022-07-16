#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool check = true;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]%arr[0]!=0)
                check = false;
        }
        if(check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;




    }
}








