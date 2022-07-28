    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while(t--) {
            int n,m;cin>>n>>m;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            string s;
            for(int i=0;i<m;i++){
                s+='B';
            }
            map<int,int>mp;
            for(int i=0;i<n;i++){
                if(mp[arr[i]]>=2)continue;
                int small=(arr[i]-1<m-arr[i]?arr[i]-1:m-arr[i]);
                int big=(arr[i]-1>m-arr[i]?arr[i]-1:m-arr[i]);
                if(s[small]!='A'){
                    s[small]='A';
                    mp[arr[i]]++;
                }
                else{
                    s[big]='A';
                    mp[arr[i]]++;
                }
            }
            cout<<s<<'\n';
        }
    }
