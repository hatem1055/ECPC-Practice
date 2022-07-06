//link code:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
#include <iostream>
using namespace std;
int main() {
   long long a,b,c ,d,mult;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    mult=a*b*c*d;
    int x= mult%100;
    if (x<10){
        cout<<0<<x;
    }
    else
        cout<<x;


    return 0;
}
