#include <iostream>
using namespace std;
int fac(int x){
    if(x==0||x==1){
        return 1;
    }
    else return x*fac(x-1);
}
int main() {
    int x,y;
    cin>>x>>y;
    int num=min(x,y);

    cout<<fac(num);
}
