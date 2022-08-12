#include <iostream>
using namespace std;

int main() {
    int n,x,off=0,untr=0;
    cin >> n;
    for(int i=0;i < n;i++){
        cin >> x;
        if(x > 0){
            off+=x;
        }
        else{
            if(off<1){
                untr++;
            }
            else{
                off--;
            }
        }
    }
    cout << untr << endl;
}
