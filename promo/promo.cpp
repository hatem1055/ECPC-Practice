// created by kareem sakkary
// last change : 12/6/2022
// link : https://codeforces.com/contest/1697/problem/B

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    long long n , q;
    cin >> n >> q;
    long long prices[n],suf_sum[n+1];
    suf_sum[0]=0;
    long long sum =0;
    for(int i =0 ; i < n;i++){
        cin >> prices[i];
    }
    sort(prices,prices+n);
    for(int i =0 ; i < n;i++) {
        sum+=prices[i];
        suf_sum[i+1]=sum;
    }
    for(int i =0 ; i<q ; i++){
        long long x , y;
        cin >> x >> y;
        cout << suf_sum[n-x+y]-suf_sum[n-x]<< endl;
    }
    return 0;
}
