#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,x=1,k=1;
    cin >> n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    while(x <= n){
        if(arr[k] == x){
            cout << k << " ";
            x++;
            k = 1;
        }
        else k++;
    }
    return 0;
}
