//https://codeforces.com/problemset/problem/617/A
#include <iostream>
using namespace std;
int main() {
    int x=0,c=0;
    cin>>x;
    if(x==1||x==2||x==3||x==4||x==5){
       c=1;
    }else {
       while(x>0){
           while(x>=5){
               c++;
               x = x - 5;
           }
            if(x>=4){
               c++;
               x =x-4;
           } else if(x>=3){
               c++;
               x =x-3;
           }else if(x>=2){
               c++;
               x =x-2;
           }else if(x>=1){
               c++;
               x =x-1;
           }
       }
    }
    cout<<c;
    return 0;
}
