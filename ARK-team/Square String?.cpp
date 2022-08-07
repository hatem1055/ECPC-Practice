#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define frj(n) for(int j = 0 ; j < n ;j++)
 
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(n%2==0) {
 
            string fr = s.substr(0, n / 2);
            string se = s.substr(n / 2, n / 2);
            if (fr == se) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        }else{
            cout << "NO";
        }
        cout << "\n";
    }
}
