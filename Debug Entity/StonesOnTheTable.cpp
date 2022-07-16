#include<iostream>
using namespace std;

int main(){
    int n,m=0;
    string stones;
    cin>>n;
    if(n<1 || n>50){
        cin>>n;
    }
    cin>>stones;
for(int i=0; i<stones.size();i++){
    if(stones[i]==stones[i+1]){
        m++;
    }
}
cout<<m;
}
