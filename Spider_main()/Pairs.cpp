/*
    This Code Made by: Mahmoud M Aziz
    Date: 11/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)


int n, m;
vector<pair<int,int>> vecPair;

void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool can(int x)
{
    int pairFail = 0, nums[n] = {};
    for(int i = 0; i < m; i++)
    {
        if(x == vecPair[i].first || x == vecPair[i].second)
            continue;
        pairFail++;
        nums[vecPair[i].first]++;
        nums[vecPair[i].second]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == pairFail)
            return true;
    }
    return false;
}
void solve()
{
    Aziz();
    cin >> n >> m;
    vecPair.resize(m);
    for(int i = 0; i < m; i++) cin >> vecPair[i].first >> vecPair[i].second;

    if(can(vecPair[0].first))
        cout << "YES" << endl;
    else if(can(vecPair[0].second))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    solve();
    return 0;
}
