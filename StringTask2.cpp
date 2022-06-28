#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;

int main() {
    char input[102];
 cin>>input;
 for(int i=0; i< strlen(input);i++)
 {
     if(isupper(input[i])) {
         input[i] = tolower(input[i]);
     }
     if(input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u'&& input[i] != 'y')
     {
         cout<<'.'<<input[i];
     }
 }
}

