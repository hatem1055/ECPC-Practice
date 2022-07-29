#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
void files() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
/*ll GCD(ll i,ll m){
    ll ans;
    for(ll j=1;j<=m;j++){
        if((i%j==0)&&(m%j==0))
            ans = i;
    }
    return i;



}*/


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll>a;
        for(int i=1;i<=n;i++)
        {
            if(l%i==0)
                a.push_back(l);

            else{
                int y = l/i;
                y = (y+1)*i;

                if(y<=r)
                    a.push_back(y);

                else
                    break;}
        }
        if(a.size()==n){
            cout<<"YES"<<endl;
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        cout<<endl;}
        else{
            cout<<"NO"<<endl;
        }



    }


}