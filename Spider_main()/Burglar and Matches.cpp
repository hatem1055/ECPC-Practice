/*
    This Code Made by: Mahmoud M Aziz
    Date: 17/7/20222
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
    int n, m, counter = 0, sum = 0; cin >> n >> m;
    vector<pair<int,int>> v;
    loop(i, 0, m-1){
        int a, b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(), v.end());
    for (int i = m-1; i >= 0; --i) {
        if(counter + v[i].second <= n){
            counter += v[i].second;
            sum += (v[i].first*v[i].second);
        }
        else{
            if(n - counter != 0){
                sum += ((n-counter)*v[i].first);
                counter += (n-counter);
            }
            break;
        }
    }
    cout << sum << endl;
}
int main()
{
    solve();
    return 0;
}
