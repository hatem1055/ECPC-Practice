#include<iostream>
using namespace std;

int main(){
    int n, countA=0, countD=0;
    cin>>n;
    string outcome;
    cin>>outcome;
    for(char i: outcome){
        if(i=='A'){
            countA++;
        }
        else if(i=='D'){
            countD++;
        }
    }
    if(countA==countD){
        cout<<"Friendship";
    }
    else if(countD>countA){
        cout<<"Danik";
    }
    else{
        cout<<"Anton";
    }
}

