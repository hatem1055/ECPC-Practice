/*
    This Code Made by: Mahmoud M Aziz
    Date: 19/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)


void Aziz13()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz13();
    map<char,int> freq;
    char arr[4];
    loop(i,0,2){
        string s; cin>>s;
        if(s[1] == '>') freq[s[0]]++;
        else freq[s[2]]++;
    }
    arr[freq['A']] = 'A';
    arr[freq['B']] = 'B';
    arr[freq['C']] = 'C';
    if(freq['A'] != freq['B'] && freq['B'] != freq['C'] && freq['A'] != freq['C']) cout << arr << endl;
    else cout << "Impossible" << endl;
}
int main()
{
    solve();
    return 0;
}
