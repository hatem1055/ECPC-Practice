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
    vector<int>cal(4);
    string s;
    int sum=0;
    for(int i=0;i<4;i++){
        cin>>cal[i];
    }
    cin>>s;
    for(int i=0;i<s.size();i++){
        sum+=cal[(s[i]-'0')-1];
    }
    cout<<sum<<endl;






}











