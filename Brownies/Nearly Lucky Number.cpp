#include <iostream>
using namespace std;
int main() {
   string x;
   cin>>x;
   int count=0;
   for(int i=0;i<x.size();i++){
       if((x[i] == '4') || (x[i] == '7')){
           count++;

       }

   }
   if(count == 4 || count == 7) {
       cout << "YES";
   }else{
       cout<<"NO";
   }
    return 0;
}
