#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>ref;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        ref.push_back(make_pair(x,y));
    }
    sort(ref.begin(),ref.end());
    for(int i=0;i<ref.size();i++){
        if(s<=ref[i].first){
            cout<<"NO";
            return 0;
        }
        else
            s+=ref[i].second;
    }
    cout<<"YES";




}








