#include <bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<2<<endl;
        }
        else{
            if(n%3==0)
                cout<<n/3<<endl;
            else
                cout<<(n/3)+1<<endl;
        }
    }









    }














    // alpha[97,122]
    // x y         a[i]==x    a[i]=y   a[










