#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
map<string,bool>vis;
map<string,vector<string>>dep;
map<string,int>index;
vector<pair<int,string>>ans; //to sort it;
void files() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
void dfs(string f){
    vis[f]=true;
    for(string j:dep[f]){
        if(!vis[j])
            dfs(j);
    }
    ans.push_back({index[f],f});
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vis.clear();
        dep.clear();
        index.clear();
        ans.clear();
        for(int i=0;i<n;i++){
            string f;
            cin>>f;
            vis[f]=false;
            index[f]=i;
            int c;
            cin>>c;
            for(int j=0;j<c;j++){
                string f2;
                cin>>f2;
                dep[f].push_back(f2);
            }
        }
        for(int i=0;i<k;i++){
            string f;
            cin>>f;
            if(!vis[f])
                dfs(f);
        }
        sort(ans.begin(),ans.end());
        for(auto i:ans){
            cout<<i.second<<endl;
        }









    }



}






