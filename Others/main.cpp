#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t;
    cin >> t;
    for(long long i=0;i<t;i++){
        long long price,c=0,x;
        cin >> price;
        x = price;
        while(x>=10){
            x /= 10;
            c++;
        }
        if(price / pow(10,c+1) == 1){
            cout << "0" << endl;
        }
        else {
            x = price - pow(10, c);
            cout << x << endl;
        }

    }
    return 0;
}