#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;cin>>n;
        int arr[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        bool found=false;
        for(auto it:mp){
            if(it.second>=3){
                cout<<it.first<<'\n';
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"-1\n";
        }
    }
return 0;
}
