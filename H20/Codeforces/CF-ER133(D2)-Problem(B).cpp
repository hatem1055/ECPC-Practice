#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    DedSec;
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        cout << n << endl;
        vector<int>perm{};
        for(int i=1;i<=n;i++) perm.push_back(i);
        for(int num : perm) cout<<num<<" \n"[num==n];
        int pointer = 0;
        while (pointer<n-1){
            swap(perm[pointer],perm[n-1]);
            for(int i=0;i<n;i++) cout<<perm[i]<<" \n"[i==n-1];
            pointer++;
        }
    }
    return 0;
}
