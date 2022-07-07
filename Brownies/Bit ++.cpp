//https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;

int main() {
   int n;
   string s;
   int X=0;
   cin>>n;
   for(int i =0;i<n;i++){
       cin>>s;
       if(s == "++X"){
        ++X;
       }if(s =="--X"){
          --X;
       }if(s == "X++"){
           X++;
       }if(s == "X--"){
           X--;
       }
   }
   cout<<X;
    return 0;
}
