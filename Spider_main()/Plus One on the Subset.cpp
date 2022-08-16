/*
    This Code Made by: Mahmoud M Aziz
    Date: 16/8/20222
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
        int n,maxi=0,mini=1000000001;
        cin>>n;
        loop(i,0,n-1){
            int a; cin>>a;
            if(a > maxi) maxi = a;
            if(a < mini) mini = a;
        }
        cout << maxi-mini << "\n";
    }
}
int main()
{
    solve();
    return 0;
}