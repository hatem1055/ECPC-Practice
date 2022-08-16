#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define frj(n) for(int j = 0 ; j < n ;j++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);

using namespace std;
bool next(string ptr , string nex){

}
int main() {
    kareemS
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool fl= false;
        for(int i = 0 ; i < s.size();i+=2){
            if(c==s[i]){
                if(i%2==0)fl= true;
            }
        }
        if(fl)yes
        else no
    }
}
