// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   string word1 = "X++";
   string word2 = "++X";
   string word3 = "X--";
   string word4 = "--X";
   int t;
   cin>>t;
   int x=0;
   while(t--){
       string test{};
       cin>>test;
       if(test==word1){
           x++;
       }else if(test==word2){
           ++x;
       }else if(test==word3){
           x--;
       }else if(test==word4){
           --x;
       }
   }
   cout<<x<<endl;

    return 0;
}
