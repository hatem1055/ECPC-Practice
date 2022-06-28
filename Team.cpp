//https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;
int main() {
    int num,a,b,c,count;
    count =0;
    cin>>num;
    for(int i = 1;i<=num;i++){
        cin>>a>>b>>c;
        if((a == 1 && b ==1) ||(a==1 && c ==1) ||(b==1&&c==1)){
            count++;
        }}
    cout<<count;
}
