#include <iostream>
using namespace std;
int main() {
    int w,doll=0;
    int k,n;
    cin>>k>>n>>w;
    for(int i =1;i<=w;i++){
        doll +=(k*i);
    }
    if(doll<n){
        cout<<"0";
    }else{
        cout<<(doll-n);
    }
    return 0;
}
