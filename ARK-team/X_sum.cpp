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
        int n,m;
        cin >> n >> m;
        int a[n][m];
        fr(n){
            frj(m){
                cin >> a[i][j];
            }
        }
        int max_sum = 0;
        fr(n){
            frj(m){
                //right diagonal
                int sum = 0;
                int x = i-min(i,j) , y =j-min(i,j);
                while(x<n && y<m){
                    sum += a[x][y];
                    x++;
                    y++;
                }
                //left
                x = i-min(i,m-j-1) , y =j+min(i,m-j-1);
                while(x<n && y<m&&y>=0){
                    sum += a[x][y];
                    x++;
                    y--;
                }
                sum -= a[i][j];
                max_sum = max(max_sum,sum);
            }
        }
        cout << max_sum <<endl;

    }
}
