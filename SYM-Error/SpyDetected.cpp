#include <iostream>
using namespace std;
int main() {
int t;
cin >> t;
while (t--){
    int n;
    cin>> n;
    int a[n];
    for (int i =0; i<n;i++){
        cin>> a[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0 && a[i] != a[i+1] && a[i] != a[i+2] ){
            cout<<(i+1)<<endl;
            break;
        }
        if(i == 0 && a[i] != a[i+1] && a[i] == a[i+2] ){
            continue;
        }
        if(i == n-1){
            cout<<(i+1)<<endl;
            break;
        }
        if(a[i] != a[i+1] && a[i] != a[i-1]){
            cout<<(i+1)<<endl;
            break;
        }
    }
}

return 0;
}
