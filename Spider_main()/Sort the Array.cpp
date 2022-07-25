/*
    This Code Made by: Mahmoud M Aziz
    Date: 23/7/20222
*/
#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define ull unsigned long long
#define ld long double
#define loop(i, s, e) for(int i = s; i <= e; i++)
#define testcase() int i; cin >> i; while(i--)


int n;
void Aziz13()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    Aziz13();
    cin>>n; ll arr[n], arr1[n];
    int l=0,r=0;
    bool check=false, isEqual=true;
    loop(i,0,n-1){
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    sort(arr1, arr1+n);
    loop(i,0,n-2){
        if(arr[i] > arr[i+1]){
            l=i;
            break;
        }
    }
    loop(i,l,n-2){
        if(arr[i] < arr[i+1]){
            r=i; check=true;
            break;
        }
    }
    if(!check) r=n-1;
    reverse(arr+l, arr+r+1);
    loop(i,0,n-1) {
        if (arr[i] != arr1[i]) {
            isEqual = false;
            break;
        }
    }
    if(isEqual){
        cout << "yes\n";
        cout << l+1 << " " << r+1 << "\n";
    }
    else{
        cout << "no\n";
    }
}
int main()
{
    solve();
    return 0;
}