/*
    This Code Made by: Mahmoud M Aziz
    Date: 20/7/20222
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
    int n,m; cin>>n;
    map<int,int> arr;
    loop(i,0,n-1){
        int tmp; cin>>tmp;
        arr[tmp] = i+1;
    }
    cin>>m; ull vasya = 0, petya = 0;
    loop(i,0,m-1){
        int tmp; cin>>tmp;
        vasya += arr[tmp];
        petya += (n-arr[tmp]+1);
    }
    cout << vasya << " " << petya << endl;
}
int main()
{
    solve();
    return 0;
}