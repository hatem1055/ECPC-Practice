    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while(t--) {
            int n;cin>>n;
            string s;
            cin>>s;
            map<char,int>mp;
            for(int i=0;i<n;i++){
                mp[s[i]]++;
            }
            int sum=0;
            for(auto it:mp){
                sum+=it.second+1;
            }
            cout<<sum<<'\n';
        }
    return 0;
    }
