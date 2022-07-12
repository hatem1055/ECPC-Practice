#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<string>ans;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        vector<int>v;
        cin>>n>>k;
        map<int,int>max,min;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(min[x]==0)
                min[x]=i;
            max[x]=i;
        }

        while(k--){
            int a,b;
            cin>>a>>b;
            if((min[a]==0)||(max[b]==0))
                ans.push_back("NO");
            else{
                if(max[b]>min[a])
                    ans.push_back("YES");
                else
                    ans.push_back("NO");}

        }



    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}




