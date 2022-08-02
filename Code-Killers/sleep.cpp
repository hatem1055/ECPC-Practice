#include <bits/stdc++.h>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        int t;
        cin>>t;
        while(t--){
            int n,h,m;
            cin>>n>>h>>m;
            int H,M;
            int hm=m+(h*60);
            int ans=100000;
            for(int i=0; i<n; i++){
                cin>>H>>M;
                int HM=M+(60*H);
                int dif=HM-hm;
                if(dif<0){
                    dif+=(60*24);}
                ans = min(ans,dif);
            }
            cout<<ans/60<<" "<<ans%60<<endl;
        }

        return 0;

    }











