#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
void files() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        vector<int>keys;
        int arr[3];
        int key1;
        cin>>key1;
        keys.push_back(key1);
        for(int i=0;i<3;i++)
            cin>>arr[i];
            for(int j=0;j<3;j++){
                keys.push_back(arr[keys[j]-1]);
        }
            if(find(keys.begin(),keys.end(),0)==keys.end()-1){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
    }


}