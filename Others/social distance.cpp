#include <iostream>
#include <algorithm>
using  namespace  std;
void solve(){
    long long n,m;
    cin>>n>>m;
    long long ar[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ar[n]=ar[0];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=max(ar[i],ar[i+1]);
    }
    sum+=n;
    if(sum<=m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}