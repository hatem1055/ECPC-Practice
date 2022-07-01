#include <iostream>
using namespace std;

int main() {
int problems,first,second,third;
int total;
cin>> problems;
for(int i =0; i<problems;i++){
    cin>>first>>second>>third;
    if(first + second + third >= 2)
        total++;
}
cout<<total;
}
