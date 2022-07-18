/*
    This Code Made by: Mahmoud M Aziz
    Date: 18/7/20222
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
    string s; cin>>s;
    int counter = 0;
    while(s.size() != 1){
        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            sum += (s[i]-'0');
        }
        counter++;
        s = to_string(sum);
    }
    cout << counter << endl;
}
int main()
{
    solve();
    return 0;
}
