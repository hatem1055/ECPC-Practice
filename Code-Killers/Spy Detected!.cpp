#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int size;
        cin>>size;
        int ar[size];
        for (int i = 0; i < size; ++i) {
            cin>>ar[i];
        }
        bool check = false;
        for (int i = 1; i <size-1 ; i++) {
            if (ar[i]!=ar[i-1] && ar[i]!=ar[i+1]){
                cout<<i+1<<endl;
                check = true;
            }
        }
        if (check == false){
            if (ar[0]!=ar[1]){
                cout<<1<<endl;
            } else{
                cout<<size<<endl;
            }
        }
    }
}