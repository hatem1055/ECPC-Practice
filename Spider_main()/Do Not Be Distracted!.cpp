/*
    This Code Made by: Mahmoud M Aziz
    Date: 11/8/20222
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
        int n; cin>>n;
        string s; cin>>s;
        bool check = true;
        map<char,int> freq;
        for(int i = 0; i < s.size();){
            if(freq[s[i]] > 0){
                check = false;
                break;
            }
            else{
                freq[s[i]]=1;
                char tmp = s[i];
                while(tmp == s[i]){ i++; }
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main()
{
    solve();
    return 0;
}