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
inline bool isNear(int ind, char egg[], char color){
    return (color != egg[ind-1] && color != egg[ind-2] && color != egg[ind-3] && color != egg[ind+1] && color != egg[ind+2] && color != egg[ind+3]);
}
void solve()
{
    Aziz13();
    int n; cin>>n;
    char color[] = {'R','O','Y','G','B','I','V'};
    char egg[n+1]; egg[n] = '\0';
    loop(i,0,3) egg[i] = color[i];
    egg[n-3] = color[4]; egg[n-2] = color[5]; egg[n-1] = color[6];
    loop(i,4,n-4){
        loop(j,0,6){
            if(isNear(i,egg,color[j])){
                egg[i] = color[j];
                break;
            }
        }
    }
    cout << egg << endl;
}
int main()
{
    solve();
    return 0;
}

