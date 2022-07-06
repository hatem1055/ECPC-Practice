// created by shahd moamen
// link :https://codeforces.com/problemset/problem/1328/A
#include <iostream>
using namespace std;
int main() {
   int t;
   cin>> t;
    while (t--){
        int a,b;
        cin>>a>>b;
        int moves=0;
        if(a%b==0){
            cout<< '0'<<endl;
        }else
            cout<< (b-(a%b))<<endl;
    }
    return 0;
}
