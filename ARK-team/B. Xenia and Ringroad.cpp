//https://codeforces.com/problemset/problem/339/B
//created by : Rana Essam 
//last edit : 7/7/2022

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long  m , n , ans=0 ;
    cin >> n >> m;
    long long  * t = new long long [m];
    for(long long i = 0 ; i < m ; i++)
    {
        cin >> t[i];
    }
    for(long long i = 0 ; i < m ; i++)
    {
        if (i == 0 )
        {
            ans += t[i]-1;
        }
        else if ( t[i] >= t[i - 1])
        {
            ans += t[i] - t[i - 1];
        }
        else 
        {
            ans += n - t[i - 1] + t[i]; 
        }
    }
    cout << ans ;
    
}