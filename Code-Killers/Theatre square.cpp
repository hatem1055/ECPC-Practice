#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
void files() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,a;
    ll size1,size2;
    cin>>n>>m>>a;
    size1 = n/a;
    size2 = m/a;
    if(n%a!=0)
        size1++;
    if(m%a!=0)
        size2++;
    cout<<size1*size2;


}






