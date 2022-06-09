#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t{0};
    cin>>t;
    while (t--) {
        int n{0};
        cin >> n;
        int h1 = n/3;
        int delta = n - 3 * h1;
        int h2{0},h3{0};
        if(delta==1){
            h1 += delta + 1;
            h2 = n/3;
            h3 = n/3 - 1;
        }else if(delta==0){
            h1 += 1;
            h3 = n/3 - 1;
            h2 = n/3;
        }else{
            h1+=delta;
            h2 = n/3 + 1;
            h3 = n/3 - 1;
        }
        cout << h2 << " " << h1 << " " << h3 << endl;
    }
    return 0;
}
