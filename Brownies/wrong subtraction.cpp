#include <iostream>
using namespace std;
int main() {
   int n=0,k=0;
   cin>>k>>n;
   while(n--){
      if((k%10) == 0){
         k= k/10;
      }else{
          k= k-1;
      }

   }
    cout<<k;
    return 0;
}
