/*
    This Code Made by: Mahmoud M Aziz
    Date: 1/8/20222
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
        int n,H,M; cin>>n>>H>>M;
        vector<pair<int,int>> v(n);
        pair<int,int> sleep = {25,25};
        loop(i,0,n-1){
            int x,y;
            cin>>v[i].first>>v[i].second;
            if(H>v[i].first || (H==v[i].first && M > v[i].second)){
                x = 23-H;
                y = 60-M;
                if(y==60){y=0; x++;}
                x+=v[i].first;
                y+=v[i].second;
                if(y >= 60){
                    y-=60;
                    x++;
                }
            }
            else if(H==v[i].first){
                x = 0; y=v[i].second-M;
            }
            else{
                if(v[i].second >= M){
                    y = v[i].second-M;
                    x = v[i].first-H;
                }
                else{
                    y = (v[i].second+60)-M;
                    x = (v[i].first-1)-H;
                }
            }
            sleep = min(sleep, {x,y});
        }
        cout << sleep.first << " " << sleep.second << "\n";
    }
}
int main()
{
    solve();
    return 0;
}