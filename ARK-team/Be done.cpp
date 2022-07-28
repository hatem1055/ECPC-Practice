//https://codeforces.com/group/ARb1vgiFev/contest/383077/problem/E
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
 
 
int main()
{
    kareemS
//    int t;
//    cin >>t;
//    while(t--){
        ll n,k;
        cin >> n >> k ;
        ll a[n] , b[n] ;
        ll sum =0;
 
        fr(n) { cin >> a[i]; sum+=a[i]; }
        fr(n) {
            cin >> b[i];
            sum -= b[i];
        }
        cout <<sum;
//    }
    return 0;
 
}
