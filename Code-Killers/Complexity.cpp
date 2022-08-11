#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    set<char>ref;
    vector<int>v;
    map<char,ll>freq;
    cin>>s;
    for(int i=0;i<s.size();i++){
        ref.insert(s[i]);
        freq[s[i]]++;
    }
    if(ref.size()<=2){
        cout<<0<<endl;
        return 0;
    }
    for(auto x:freq){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<v.size()-2;i++){
        ans+=v[i];
    }
cout<<ans<<endl;







}
