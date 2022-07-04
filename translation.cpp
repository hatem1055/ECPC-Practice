#include <iostream>
using namespace std;
bool translation(string s, string t)
{
    int size = s.length();
    for(int i = 0; i < size; i++)
        if(s[i] != t[size - 1 - i])
            return false;
    return true;
}
int main()
{
    string s, t;
    cin>>s;
    cin>>t;
    cout<<(translation(s,t) ? "YES" : "NO");
}