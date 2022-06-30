    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
     
        int t; cin>>t;
        while(t--){
            int n,m; cin>>n>>m;
            int sum=0;
            int num;
            for(int j=0;j<n;j++){
                cin>>num;
                sum+=num;
            }
            if(sum-m<=0) cout<<"0\n";
            else cout<<sum-m<<'\n';
        }
        return 0;
    }
