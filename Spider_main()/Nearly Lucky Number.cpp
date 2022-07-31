#include<iostream>

using namespace std;

#define ll long long
#define loop(i,n,t) for(int i = n ; i <= t ; i++)
#define testcase() int i; cin >> i;
#define sloop(str) for(int i = 0 ; i < str.size() ; i++)

int main()
{
    ll counter = 0;
    string str;
    cin >> str;
    sloop(str)
    {
        if (str[i] == '7' || str[i] == '4')
            counter += 1;
    }
    if ( counter == 4 || counter == 7)
        cout << "YES";
    else
        cout << "NO";
}
