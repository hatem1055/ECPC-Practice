#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int capacity=0;
    int stillnow=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        stillnow-=a;
        stillnow+=b;
        capacity=max(capacity,stillnow);

    }
    cout<<capacity;

    return 0;
}