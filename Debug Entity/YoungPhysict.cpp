#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int x,y,z;
    int sumX=0, sumY=0, sumZ=0;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n;i++){
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(sumX==0 && sumY==0 && sumZ==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}