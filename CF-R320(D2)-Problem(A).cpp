#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int x{0};
    cin>>x;
    int counter = 0;
    while (x>0){
        if(x%2!=0){
            counter++;
        }
        x /= 2;
    }
    cout<<counter;
}
