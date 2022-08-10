#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    string s;
    while(cin >> a >> b >> c >> d){
       int count =0;
       cin >> s;
       for(int i=0;i < s.size();i++){
           if(s[i]=='1'){
               count += a;
           }
           else if (s[i]=='2'){
               count += b;
           }
           else if (s[i]=='3'){
               count += c;
           }
           else if (s[i]=='4'){
               count += d;
           }
       }
       cout << count << endl;
       break;
    }
}
