/*
    This Code Made by: Mahmoud M Aziz
    Date: 7/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 main()
{
    Aziz();
    bool check = false;
    int c= 0;

    string s;
    cin >> s;
    if(s.size()%2 == 1 && s[0] == '1') check = true;
    for(int i = 1; i < s.size(); i++)
        if(s[i] == '0') c++;

    if(c != s.size()-1) cout << ceil(double(s.size())/2) << endl;
    else cout << floor(double(s.size())/2) << endl;

    return 0;
}
