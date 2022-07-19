#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >>n;
    cin >>s;
    int a =s.size();
    int suma=0;
    int sumd=0;
    for (int i=0; i<a;i++){
        if(s[i]=='A')
            suma++;
        else if(s[i]=='D')
            sumd++;
    }
    if (suma>sumd)
        cout<<"Anton";
    else if (sumd>suma)
        cout<<"Danik";
    else if(suma==sumd)
        cout<<"Friendship";

    return 0;
}