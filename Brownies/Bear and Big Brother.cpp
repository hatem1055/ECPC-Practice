#include <iostream>
using namespace std;
int main() {
    int a,b,x=0;
    cin>>a>>b;
    while(a<=b){
        x++;
        a*=3;
        b*=2;
    }
    cout<<x;
    return 0;
}
