//https://codeforces.com/gym/102267/problem/I
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(ll i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main()
{
    kareemS
    long long n;
    cin  >> n;
    ll ans[n];
    fr(n)ans[i]=0;
    string bugs;
    cin >> bugs;
    ll s = 0;
    string num;
    stack<ll> st ;
    st.push(0);

    for(char c : bugs) {
        if (isdigit(c))
        {
            num+=c;
        }else{
            if(num!="") {
                ans[stoll(num)-1] = st.top();
                st.push(stoll(num));
            }
            if(c== ')')  st.pop();
            num="";
        }
    }
    for(ll i : ans) cout << i << " ";
    return 0;

}
