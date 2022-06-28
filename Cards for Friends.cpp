#include <iostream>
using namespace std;
int main(){
    int t,w,h,n,ref=1;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> w>>h>>n;
        if(w%2==0){
        while (w%2==0){
            ref*=2;
            w = w/2;
        }

        }

        if(h%2==0){
            while (h%2==0){
                ref*=2;
                h=h/2;
            }
        }
        if(ref>=n)
            cout << "YES"<<endl;
        else cout << "NO"<<endl;
        ref = 1;


    }


}






