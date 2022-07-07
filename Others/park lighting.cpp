#include <iostream>
#include <cmath>
using namespace std;

int light(){
    int n,m;
    cin>>n>>m;
    int min=m*(n/2);
    if (n%2)
        min+=ceil(1.0*m/2);
    cout<<min<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        light();

    }
}