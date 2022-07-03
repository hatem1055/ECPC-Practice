// created by shahd moamen
// link :https://codeforces.com/problemset/problem/131/A
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
string str;
char y;
bool x= true;
cin>> str;
for (int i = 1;i<str.length();i++){
    if(islower(str[i]))
    {
        x = false;
    }}
if(x == true)
    {
for(int j =0; j<str.length();j++){
     if (islower(str[j]))
       y= toupper(str[j]);
else
        y= tolower(str[j]);
    cout<<y;
 }}
else
     cout<<str;


    return 0;
}
