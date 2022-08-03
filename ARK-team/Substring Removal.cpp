//https://codeforces.com/group/ARb1vgiFev/contest/392667/problem/B
#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main() {

    int t=1;
//    cin >> t;
    while(t--){
        int n ;
        string s;
        cin >> n >> s;
        ll first_seq = 1 , end_seq = 1,seq=0;
        int i;
        for(i =1 ; i<n;i++){
            if(s[i]==s[0])first_seq++;
            else{break;}
        }
        for(int j =n-2 ; j>=i;j--){
            if(s[j]==s[n-1])end_seq++;
            else{break;}
        }
        if(s[0]==s[n-1]&&i!=n){
            seq+= first_seq*end_seq;
        }
        if(i==n){
            cout << n*(n+1)/2;
        }else
        cout << (end_seq+first_seq+seq+1)%998244353;

    }
}
