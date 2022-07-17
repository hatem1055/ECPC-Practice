// Problem Link: https://codeforces.com/contest/1708/problem/A
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        bool flag = true;
        for(int i = 1;i<n;i++){
            if(arr[i] % arr[0] != 0)
                flag = false;
        }
        if(flag)
            YES
        else
            NO
    }
}