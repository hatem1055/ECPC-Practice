//https://codeforces.com/problemset/problem/263/A
#include <iostream>
using namespace std;
int main() {
    int a[5][5],steps;
    for(int i =0;i<5;i++){
        for(int j =0; j<5 ;j++){
            cin>>a[i][j];
        }}

    for(int i =0;i<5;i++){
        for(int j =0; j<5 ;j++){
            if(a[i][j] == 1){
                steps = (abs(i -2)+abs(j-2));
                break;
            }
        }}
cout<<steps;
    return 0;
}
