// created by shahd moamen
// link :https://www.codechef.com/submit/FLOW018
#include <iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;}
    else{
        return n*factorial(n-1);
    }
}
int main() {
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        cout <<factorial(N)<<endl;
    }
    ;	return 0;
}
