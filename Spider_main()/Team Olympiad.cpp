/*
    This Code Made by: Mahmoud M Aziz
    Date: 3/8/20222
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
    map<int,vector<int>> indexes;
    int n; cin>>n;
    int arr[n], freq[4]={};
    loop(i,0,n-1){
        cin>>arr[i];
        freq[arr[i]]++;
        indexes[arr[i]].push_back(i+1);
    }
    int Min = *min_element(freq+1, freq+4);
    if(Min == 0) cout << 0 << "\n";
    else{
        cout << Min << "\n";
        loop(i,0,Min-1){
            cout << indexes[1][indexes[1].size()-1] << " ";
            cout << indexes[2][indexes[2].size()-1] << " ";
            cout << indexes[3][indexes[3].size()-1] << "\n";
            indexes[1].pop_back();
            indexes[2].pop_back();
            indexes[3].pop_back();
        }
    }

}
int main()
{
    solve();
    return 0;
}