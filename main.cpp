#include <iostream>
using namespace std;
int main()
{
int a,n;
cin >> a >> n;
for(int i=0; i<n; i++){
    if(a%10==0){
        a/=10;
    }
    else{
        a--;
    }
}
cout << a;
}
