/*
    This Code Made by: Mahmoud M Aziz
    Date: 28/7/20222
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
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n,m,x,t;
char s[31][31];
char txt[500001];
vector<pair<int,int>> posk[26], shift;
bool can[26]={};


int dist(int a,int b,int c,int d){
    return (a-c)*(a-c)+(b-d)*(b-d);
}
bool check(int i, int j){
    for(int k = 0; k < shift.size(); k++){
        int dis = dist(i,j,shift[k].first,shift[k].second);
        if(dis <= x*x){
            return true;
        }
    }
    return false;
}
void solve()
{
    Aziz13();
    cin>>n>>m>>x;
    loop(i,0,n-1){
        loop(j,0,m-1){
            cin >> s[i][j];
        }
    }
    loop(i,0,n-1){
        loop(j,0,m-1){
            if(s[i][j] == 'S') shift.push_back({i,j});
            else posk[s[i][j]-'a'].push_back({i,j});
        }
    }
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < posk[i].size() && !can[i]; j++){
            can[i] = can[i] || check(posk[i][j].first, posk[i][j].second);
        }
    }
    cin>>t; cin>>txt;
    int counter=0;
    for(int i = 0; i < t; i++){
        if(islower(txt[i])){
            if(posk[txt[i]-'a'].empty()){
                cout << -1 << "\n";
                return;
            }
        }
        else{
            txt[i] = tolower(txt[i]);

            if(shift.size()==0 || posk[txt[i]-'a'].empty()){
                cout << -1 << "\n";
                return;
            }
            if(!can[txt[i]-'a']) counter++;
        }
    }
    cout << counter << "\n";
}
int main()
{
    solve();
    return 0;
}