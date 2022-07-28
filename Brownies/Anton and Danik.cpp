#include <iostream>
using namespace std;
int main() {
    int n,a=0,d=0; cin>>n;
    string y; cin>>y;
    for(int i =0;i<y.size();i++){
        if(y[i] == 'A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }else if(a<d){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}
