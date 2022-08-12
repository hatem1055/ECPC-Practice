#include<iostream>
using namespace std;

int main(){
    int n,h;
    int width;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int height;
        cin>>height;
        if(height<=h){
            width++;
        }
        else{
            width+=2;
        }
    }
    cout<<width;
}