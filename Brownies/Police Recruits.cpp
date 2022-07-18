// Problem Link: https://codeforces.com/problemset/problem/427/A
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define f first
#define s second
#define e '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

int main(){
    NadaM
    int n, count = 0, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > 0)
            count += arr[i];
        else if(arr[i] == -1 && count)
            count -= 1;
        else if(arr[i] == -1 && !count)
            ans++;
    }
    cout << ans;
}