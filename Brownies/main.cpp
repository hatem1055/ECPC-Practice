#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.141592653
using namespace std;
int main() {
    float r;
    cin>>r;
    cout<<fixed<<setprecision(9)<<(pi)*(pow(r,2));
    return 0;
}
