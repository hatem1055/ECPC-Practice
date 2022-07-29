#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(ll i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
bool flag=true;
void check(int n,map<int,int> pr){
    if(n==6){
        flag = true;
        return;
    }
    for(int i = 0 ; i<=n;i++){
        pr[i]--; pr[n-i]--;
        if(pr[i]>=0 && pr[n-i]>=0){
            check(n+1,pr);
        }
        pr[i]++; pr[n-i]++;
    }
}
int main()
{
    kareemS
    int t;
    cin >> t;
    while(t--){
        string problem;
        cin >> problem;
        map<int,int> pro;
        flag = false;
        for(char c: problem){
            pro[c-'A'+1]++;
        }
        pro[0]=50;
        check(1,pro);
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

}
