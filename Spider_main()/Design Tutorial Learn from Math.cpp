/*
    This Code Made by: Mahmoud M Aziz
    Date: 7/8/20222
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
bool isComposite(int x){
    int counter = 0;
    for (int i = 2; i*i <= x; ++i) {
        if(x % i == 0) counter++;
    }
    if(counter >= 1) return true;
    else return false;
}
void solve()
{
    Aziz13();
    int n,x,y; cin >> n;
    if(n % 2 == 0) x = y = n/2;
    else{
        x = (n-1)/2;
        y = (n+1)/2;
    }
    while(!isComposite(x) || !isComposite(y)){
        x--;
        y++;
    }
    cout << x << " " << y << "\n";
}
int main()
{
    solve();
    return 0;
}