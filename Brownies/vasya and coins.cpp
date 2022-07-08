
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        int b;
        cin >> a ;
        cin>> b;
        if (a==0)
            cout<<1<<endl;
        else
            cout<< (a+(2*b+1))<<endl;
    }
    return 0;
}