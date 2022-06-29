#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string,int>mp;
    int counter=1;
    for(int j=0;j<26;j++)
    {
        for(int k=0;k<26;k++)
        {
            if(j!=k)
            {
                string s="  ";
                s[0]=char(j+'a');
                s[1]=char(k+'a');
                mp[s]=counter;
                counter++;
            }
        }
    }

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string in;
        cin>>in;
        cout<<mp[in]<<'\n';
    }
    return 0;
}
