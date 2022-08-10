#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define MOD 1000000007

using namespace std;
void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    vector<char>ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(find(ans.begin(),ans.end(),s[i])==ans.end())
            ans.push_back(s[i]);
    }
    if(ans.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;



}











