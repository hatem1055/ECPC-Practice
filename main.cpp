#include <iostream>
using namespace std;

int main()
{
int m,a,b,n;
cin >> n >> m >> a >> b;

if(m*a > b){
    int x = (n%m)*a;
    if(x>b){
        cout << n/m*b + b;
    }
    else{
        cout << n/m*b + x;
    }
}
else{
    cout << n*a;
}
}
