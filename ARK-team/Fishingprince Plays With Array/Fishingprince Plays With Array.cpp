// created by kareem sakkary
// last change : 30/6/2022
// link : https://codeforces.com/contest/1696/problem/C
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll> a,b;
        for (int i = 0;  i < n;i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        int k;
        cin >> k;
        for (int i = 0;  i < k;i++) {
            ll temp;
            cin >> temp;
            b.push_back(temp);
        }
        vector<pair<ll,ll>> freq_num;
        for(int i = 0;i<n;i++){
            ll nu = 1;
            while(a[i]%m==0){
                a[i]/=m;
                nu*=m;
            }
            if(a[i] == a[i-1]){
                freq_num[freq_num.size()-1].second+=nu;
            }else
                freq_num.emplace_back(a[i],nu);
        }
        vector<pair<ll,ll>> freq_num2;

        for(int i = 0;i<k;i++){
            ll nu = 1;
            while(b[i]%m==0){
                b[i]/=m;
                nu*=m;
            }
            if(b[i] == b[i-1]){
                freq_num2[freq_num2.size()-1].second+=nu;
            }else
                freq_num2.emplace_back(b[i],nu);
        }
        bool flag = true;


        if(freq_num.size() == freq_num2.size()){
            for(int i = 0;i<freq_num.size();i++){
                if(freq_num[i].first != freq_num2[i].first || freq_num[i].second != freq_num2[i].second)flag =false;
            }
            if(flag) cout <<"Yes"<<endl;
            else cout <<"No"<<endl;
        }else{
            cout <<"No"<<endl;
        }
    }
}