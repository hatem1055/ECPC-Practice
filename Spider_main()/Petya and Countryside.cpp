/*
    This Code Made by: Mahmoud M Aziz
    Date: 14/7/20222
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
    int n, maximal = 0; cin >> n;
    int arr[n];
    loop(i, 0, n-1) cin >> arr[i];
    loop(i, 0, n-1){
        int counter = 1;
        loop(j, i+1, n-1){
            if(arr[j] <= arr[i] && arr[j] <= arr[j-1]) counter++;
            else break;
        }
        for(int j = i-1; j >= 0; j--){
            if(arr[j] <= arr[i] && arr[j] <= arr[j+1]) counter++;
            else break;
        }
        maximal = max(maximal, counter);
    }
    cout << maximal << endl;
}
int main()
{
    solve();
    return 0;
}
