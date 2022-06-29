    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
     
        int t; cin>>t;
        while(t--){
            int n; cin>>n;
            map<int,int>mp;
            int num;
            for(int j=0;j<n;j++)
            {
                cin>>num;
                mp[num]++;
            }
            int sz=mp.size();
            if((n-sz)%2==1) cout<<--sz<<'\n';
            else cout<<sz<<'\n';
        }
        return 0;
    }
