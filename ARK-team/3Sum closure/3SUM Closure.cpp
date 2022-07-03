// created by kareem sakkary
// last change : 7/3/2022
// link : https://codeforces.com/contest/1698/problem/C
#include <bits/stdc++.h>

using namespace std;
#define ll long long



int main()
{
    int t;
    cin >> t;
    while(t--){
        bool done= false;
        vector<ll> a;
        int n,pos=0,neg=0,zeros=0;
        cin >> n;
        for(int i = 0;i<n;i++){
            ll temp ;
            cin >> temp;
            if(temp >0)pos++;
            else if(temp<0)neg++;
            if(temp==0){
                if(zeros<2)
                    a.push_back(temp);
                zeros++;
            }else{
                a.push_back(temp);
            }
        }
        if(pos>2||neg>2){cout << "NO" << endl; done=true;}
        if(done)continue;
        for (int i = 0; i <a.size()&&!done; ++i) {
            for (int j = i+1; j < a.size()&&!done; ++j) {
                for (int k = j+1; k < a.size()&&!done; ++k) {
                    bool ok = false;
                    ll sum = a[i]+a[j]+a[k];
                    for (ll l :a) {
                        if(sum == l) {
                            ok = true;
                        }
                    }
                    if(!ok){
                        cout << "NO" << endl;
                        done = true;}
                }
            }
        }
        if(done)continue;
        cout << "YES" << endl;
    }
}
