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
        int n ;
        cin >> n;
        int a[n];
        fr(n){
            cin >> a[i];
        }
        if(n==1){
            if(a[0]==1)yes
            else no
        }else {
            sort(a, a + n);
            if (abs(a[n - 1] - a[n - 2]) <= 1)yes
            else
                no
        }
    }
}
