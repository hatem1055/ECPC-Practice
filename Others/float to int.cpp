//code link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
using namespace std;
#include <iostream>
int main() {
   double x;
   cin >>x;
   int y =(int)x;
   if(x-y>0){
       cout<<"float "<<y<<" "<<x-y<<endl;

   }
   else{
       cout<<"int "<<y;
   }


    return 0;
}

