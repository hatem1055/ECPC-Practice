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
        int a,b;
        cin >> a >> b;
        if(a>0){
            cout << a+(b*2)+1 << endl;
        }else{
            cout  << 1 << endl;
        }
    }
}
