/*
    This Code Made by: Mahmoud M Aziz
    Date: 6/8/20222
*/
#include <bits/stdc++.h>

using namespace std;



#define ll long long
#define fi first
#define se second
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)

void Aziz13()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz13();
    testcase(){
        int k, counter=1; cin>>k;
        for(int j = 1; j <= k;){
            if(counter%3 != 0 && counter%10 != 3) j++;
            counter++;
        }
        cout << --counter << "\n";
    }

}
int main()
{
    solve();
    return 0;
}