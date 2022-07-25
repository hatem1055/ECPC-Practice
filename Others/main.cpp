#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,c=0;
    cin >> n;
    string s1,s2,s3;
    for(int i=0;i<n;i++){
        if(i == 0){
            cin >> s1;
            c++;
        }
        else{
            cin >> s2;
            if(s1 == s2) c++;
            else s3 = s2;
        }
    }
    if(n - c > c) cout << s3;
    else cout << s1;
    return 0;
}