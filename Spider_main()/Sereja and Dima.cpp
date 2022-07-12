/*
    This Code Made by: Mahmoud M Aziz
    Date: 12/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)


void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz();
    deque<int> d;
    int n, c = 0, s1 = 0, s2 = 0;
    cin >> n;
    d.resize(n);
    loop(i, 0, n-1) cin >> d[i];

    while(d.size() > 0)
    {
        if(c%2 == 0)
        {
            s1 += max(d.front(), d.back());
            if(d.front() > d.back()) d.pop_front();
            else d.pop_back();
            c++;
        }
        else
        {
            s2 += max(d.front(), d.back());
            if(d.front() > d.back()) d.pop_front();
            else d.pop_back();
            c++;
        }
    }
    cout << s1 << " " << s2 << endl;
}
int main()
{
    solve();
    return 0;
}
