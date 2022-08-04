#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        string txt;
        cin >> txt >> n;
        map<string ,int> str;
        fr(n){
            string temp;
            cin >> temp;
            str[temp] = i+1;
        }
        string sub_str;
        int x;
        int end =0;
        bool flag = true;
        vector<pair<int,int>>ans;
        pair<int,int>ind;
        int t_end =0;
        int j;
        for( j = 0; j<txt.size();j++) {
            if(j>end+1) {
                flag = false;
            }

            for (int i = j; i < txt.size(); i++) {
                sub_str += txt[i];
                x = str[sub_str];
                if (x != 0 && i >= end) {
                    if(t_end<=i){
                        ind = {x, i - sub_str.size() + 2};
                        t_end = i+1;
                    }
                }
            }
            if(j==end){
                if(ind.first!=0){
                    ans.push_back(ind);
                    end=t_end;
                }
                ind ={0,0};
            }
            sub_str="";
        }
        if(j>end) {
            flag = false;
        }
        if(flag){
            cout << ans.size() << endl;
            for(auto x : ans){
                cout << x.first << " " << x.second<<endl;
            }
        }else{
            cout << -1 << endl;

        }
    }
}
