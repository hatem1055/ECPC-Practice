#include <bits/stdc++.h>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
