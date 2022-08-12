#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define frj(n) for(int j = 0 ; j < n ;j++)
 
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
 
using namespace std;
 
int main() {
    kareemS
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--) {
        int n , m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        int c=0,flag=1;
        for(int i =n-1 ;i>n-m;i--){
            if(a[i]!=b[m-c-1]){
                flag=0;
            }
            c++;
        }
        if(flag){
            for(int i =0;i<n-m+1;i++){
                if(a[i]==b[0]){
                    flag = 2;
                }
            }
        }
        if(flag==2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
