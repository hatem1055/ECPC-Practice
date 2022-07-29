#include <bits/stdc++.h>
using namespace std;

#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";

typedef long long ll;

void solve() {
    int x;
    cin >> x;
    int arr[4];
    map<int,int> check;
    for(int i = 1;i<4;i++){
        cin >> arr[i];
        check[i] = 0;
    }
    check[x]++;
    for(int i = 0;i<2;i++){
        int temp = arr[x];
        if(temp == 0)
            break;
        check[temp]++;
        x = arr[x];
    }
    bool flag = true;
    for(auto i: check){
        if(i.se != 1){
            flag = false;
            break;
        }
    }
    if(flag)
        yes
    else
        no
}

int main(){
    NadaM
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}