#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <map>


using namespace std;

// vector<vector<string>> adj;
map<string, bool> visited;
map<string, vector<string>> adj;
map<string,int>indx;
vector<pair<int,string>>ans;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


void dfs(string function){
    visited[function] = true;
    for(string j : adj[function]){
        if(!visited[j]){
            dfs(j);
        }
    }
    ans.push_back({indx[function], function});
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        adj.clear();
        visited.clear();
        indx.clear();
        ans.clear();
        for(int i = 0; i < n; i++){
            string function;
            cin >> function;
            visited[function] = false;
            adj[function];
            indx[function] = i;
            int c;
            cin >> c;
            for(int j = 0; j < c; j++){
                string function2;
                cin >> function2;
                adj[function].push_back(function2);
            }
        }
        for(int i = 0; i < k; i++){
            string function;
            cin >> function;
            if(!visited[function]) dfs(function);
        }
        sort(ans.begin(), ans.end());
        for(auto it : ans){
            cout << it.second << endl;
        }
    }
    return 0;
}