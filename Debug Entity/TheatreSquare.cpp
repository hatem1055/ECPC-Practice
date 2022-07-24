#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n,m;
    double a;
    cin>>n>>m>>a;
    long long x = ceil(n/a)* ceil(m/a);
    cout<<x;

}

