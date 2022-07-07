#include<iostream>
using namespace std;

int main(){
    int n;
    int x=0;
    string operation;
    cin>>n;
    if(n<1 || n>150){
        cin>> n;
    }
    for(int i =0; i<n; i++){
        cin>>operation;
        if(operation=="++X"|| operation == "X++") {
            x++;
        }
        else if(operation=="--X"|| operation == "X--"){
            x--;
        }
    }
    cout<<x;
}
