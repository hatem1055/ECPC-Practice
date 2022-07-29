#include <iostream>
using namespace std;
int main() {
    int n,h,c=0,x;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=h){
            c =c+1;
        }else{
            c =c+2;
        }}
    cout<<c;
    return 0;
}
