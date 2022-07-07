#include <iostream>
using namespace std;
int candies(){
    int n;
    cin>>n;
    if(n%2==0)
        n-=1;
    cout<<n/2 <<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        candies();

    }
}