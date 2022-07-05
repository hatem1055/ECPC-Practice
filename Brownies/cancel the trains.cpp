#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int m,n;
    cin>>n;
    cin>>m;
    set<int> trains;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        trains.insert(num);
    }
    int ans = 0;
    int x;
    for(int i = 0 ; i <m; i++){
        cin>>x;
        if(trains.count(x))
            ans++;
    }
    cout<<ans<<"\n";
}
}


