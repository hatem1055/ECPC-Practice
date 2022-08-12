#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    char response;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>response;
        if(response=='1'){
            count++;
        }
    }
    if(count==0){
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }
}