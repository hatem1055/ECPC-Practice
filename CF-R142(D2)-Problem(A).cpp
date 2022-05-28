#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,n,d,b;
    bool error = false;
    cin>>s>>n;
    vector<pair<int,int>>fights;
    pair<int,int>fightData;
    for(int i=0;i<n;i++){
        cin>>d>>b;
        fightData.first = d;
        fightData.second = b;
        fights.push_back(fightData);
    }
    sort(fights.begin(),fights.end());
    for(int i=0;i<n;i++){
        if(s>fights[i].first){
            s+=fights[i].second;
        } else{
            cout<<"NO"<<endl;
            error = true;
            break;
        }
    }
    if(!error){
        cout<<"YES"<<endl;
    }
    return 0;
}
