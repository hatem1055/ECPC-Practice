#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>s1(n,0);
        vector<int>s2(n+1,0);
        for(int j=0;j<n;j++)
        {
            if(s[j]=='W') s1[j]=1;
        }
        for(int j=0;j<n;j++)
        {
            s2[j+1]=s1[j]+s2[j];
        }
        int mn=n;
        for(int j=k;j<=n;j++)
        {
            mn=min(mn,s2[j]-s2[j-k]);
        }
        cout<<mn<<'\n';
    }
    return 0;
}
