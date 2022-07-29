#include <iostream>
using namespace std;
int main() {
    int n,k,c=0; cin>>n;
    for(int i =0;i<n;i++){
        cin>>k;
        c+=k;
    }
    if(c ==0){
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    return 0;
}
