#include <iostream>
using namespace std;
int main()
{
int k,n,w;
cin >> k >> n >> w;
int sum=0;
for(int i = 1; i <=w; i++){
    sum+=i;
}
int d = (sum*k)-n;
if(d<0){
    cout << "0";
}
else{
    cout << d;
}
}
