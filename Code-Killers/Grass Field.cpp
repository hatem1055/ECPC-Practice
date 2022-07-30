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
        vector<int>ans;
        for(int i=0;i<2;i++){
            int x,y;
            cin>>x>>y;
            ans.push_back(x);
            ans.push_back(y);
        }
        if(count(ans.begin(),ans.end(),1)==4){
            cout<<2<<endl;
        }
        else if(count(ans.begin(),ans.end(),0)==4)
            cout<<0<<endl;
        else
            cout<<1<<endl;

ans.clear();
    }
}






