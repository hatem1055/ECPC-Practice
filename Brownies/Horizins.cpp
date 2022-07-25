#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main() {
    double h;
    float x;
    cin>>h;
    x =(sqrt(h*(12800000+h)));
    cout<<fixed<<setprecision(5)<<x;
    return 0;
}
