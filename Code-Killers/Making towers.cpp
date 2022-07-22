



#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++) {
            mp[v[i]].push_back(i);
        }
        vector<int> ans(n,0);
        for(auto i : mp) {
            vector<int> tmp = i.second;
            int cnt = 1;
            for(int i = 1; i < tmp.size(); i++) {
                if((tmp[i] - tmp[i-1]) % 2 == 1) cnt++;
            }


            ans[i.first - 1] = cnt;
        }
        for(int ele : ans) cout<<ele<<" ";
        cout<<endl;

    }

    return 0;
}