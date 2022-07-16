/*
    This Code Made by: Mahmoud M Aziz
    Date: 16/7/20222
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
    testcase()
    {
        int n;
        cin >> n;
        ull arr[n];
        loop(i, 0, n-1) cin >> arr[i];
        ull range = 0, counter = 0;
        loop(i, 0, n-2){
            if(arr[i] != 0){
                if(range == 0) range = 1;
                else if(range == 1 && arr[i+1] != 0) range = 0;
                counter += arr[i];
            }
            else if(arr[i] == 0 && range == 1) counter++;
        }
        cout << counter << endl;
    }
}
int main()
{
    solve();
    return 0;
}
