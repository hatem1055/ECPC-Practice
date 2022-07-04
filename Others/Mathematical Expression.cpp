//link code: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    char op ,e;
    cin>>a>>op>>b>>e>>c;
   if(op=='+'){
       if(a+b==c) {
           cout << "Yes"<<endl;
       }
       else
           cout<<a+b;
   }
    if(op=='-'){
        if(a-b==c) {
            cout << "Yes"<<endl;
        }
        else
            cout<<a-b;
    }
    if(op=='*'){
        if(a*b==c) {
            cout << "Yes"<<endl;
        }
        else
            cout<<a*b;
    }

    return 0;
}
