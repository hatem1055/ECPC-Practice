#include <cctype>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    string str1,str2;
    cin>>str1>>str2;

    for_each(str1.begin(), str1.end(), [](char & c) {
        c = ::tolower(c);
    });
    for_each(str2.begin(), str2.end(), [](char & d) {
        d = ::tolower(d);
    });



    if(str1>str2)
        cout<<1;
    else if (str2>str1)
        cout<<-1;
    else if (str1==str2)
        cout<<0;

    return 0;
}