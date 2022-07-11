#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    queue <pair<int,int>>q;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        q.push({x,i+1});
    }
    int ans=0;
    while(!q.empty()){
        pair<int,int> child=q.front();
        q.pop();
        ans=child.second;
        child.first-=m;
        if (child.first > 0)
            q.push(child);
    }
    cout << ans;
}