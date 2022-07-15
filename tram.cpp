#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int n=0,b=0,a=0,x=0;
   cin>>n;
    int y[n];
   for(int i=0;i<n;i++){
       cin>>a>>b;  //a:exit  b:enter
       x = x+b-a;
       y[i]=x;
   }
   sort(y,y+n);
    cout<<y[n-1];

    return 0;
}
