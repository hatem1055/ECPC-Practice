//https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
   long double n=0,m=0,a=0,x=0;
    cin>>n>>m>>a;
    x = ceil(n/a)*ceil(m/a);
    // in test 9 the output appear in scientific notation ,so we use fixed: prevent scientific notation
    // & setprecision(0) to make it with no decimals
    cout<<fixed<<setprecision(0)<<x;
    return 0;
}
