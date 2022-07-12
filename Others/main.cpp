#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t;
    cin >> t;
    for(long long i=0;i<t;i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        for(int j=0;j<n;j++){
            int m;
            cin >> m;
            string s;
            cin >> s;
            for(int k=0;k<s.size();k++){
                if(s[k] == 'U' && arr[j] == 0) arr[j] = 9;
                else if(s[k] == 'D' && arr[j] == 9) arr[j] = 0;
                else{
                    if(s[k] == 'U') arr[j]--;
                    else arr[j]++;
                }
            }
        }
        for(int j=0;j<n;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}