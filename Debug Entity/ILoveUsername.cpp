#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int best, worst, count=0;
cin>>best;
worst=best;
while(--n){
    int a;
    cin>>a;
    if(a>best){
        count++;
        best =a;
    }
    if(a<worst){
        count++;
        worst=a;
    }
}
cout<<count;
}