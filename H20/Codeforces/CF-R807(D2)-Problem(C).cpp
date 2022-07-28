#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main(){
    DedSec
    int t;
    cin>>t;
    while (t--){
        int n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<long long>currentPosition(c+1,0);
        vector<long long>distance(c+1,0);
        long long characters = n+1;
        for(int i=1;i<=c;i++){
            long long l,r;
            cin>>l>>r;
            currentPosition[i] = characters;
            distance[i] = characters - l;
            characters+= (r - l + 1);

        }
        while (q--){
            long long query;
            cin>>query;
            for(int i=c;i>=1;i--){
                if(query<currentPosition[i]) continue;
                else{
                    query-=distance[i];
                }
            }
            cout<<s[query-1]<<endl;
        }
    }
    return 0;
}
