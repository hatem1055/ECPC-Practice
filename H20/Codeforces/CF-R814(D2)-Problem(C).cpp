/**
████████▄     ▄████████ ████████▄     ▄████████    ▄████████  ▄████████
███   ▀███   ███    ███ ███   ▀███   ███    ███   ███    ███ ███    ███
███    ███   ███    █▀  ███    ███   ███    █▀    ███    █▀  ███    █▀
███    ███  ▄███▄▄▄     ███    ███   ███         ▄███▄▄▄     ███
███    ███ ▀▀███▀▀▀     ███    ███ ▀███████████ ▀▀███▀▀▀     ███
███    ███   ███    █▄  ███    ███          ███   ███    █▄  ███    █▄
███   ▄███   ███    ███ ███   ▄███    ▄█    ███   ███    ███ ███    ███
████████▀    ██████████ ████████▀   ▄████████▀    ██████████ ████████▀

 */
#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n,q,big{0};cin>>n>>q;
    map<int,pair<int,int>>wins{};
    deque<int>strength{};
    map<int,int>positionConvertor{};
    for(int i=0;i<n;i++){
        int x;cin>>x;
        strength.push_back(x);
        //cout<<x<<" \n"[i==n-1];
        if(x>big){
            big = x;
        }
        positionConvertor[i+1] = x;
    }
    int rounds = 0;
    while (strength.front()!= big){
        rounds++;
        int a = strength.front();
        strength.pop_front();
        int b = strength.front();
        strength.pop_front();
        if(a>b){
            strength.push_front(a);
            strength.push_back(b);
            wins[a].first++;
            if(wins[a].second==0) wins[a].second = rounds;
        }else{
            strength.push_front(b);
            strength.push_back(b);
            wins[b].first++;
            if(wins[b].second==0) wins[b].second = rounds;
        }
    }
  //  cout<<"Rounds: "<<rounds<<endl;
    while (q--){
        int a,r;
        cin>>a>>r;
        if(r<=rounds){
            if(positionConvertor[a]==big){
//                cout<<"A"<<endl;
                cout<<1-(r!=rounds)<<endl;
            }else{
                if(wins[positionConvertor[a]].second>r){
//                    cout<<"C"<<endl;
                    cout<<0<<endl;
                }else{
//                   cout<<"D"<<endl;
                   if(r>wins[positionConvertor[a]].second+wins[positionConvertor[a]].first-1){
//                       cout<<"D-A"<<endl;
                       cout<<wins[positionConvertor[a]].first<<endl;
                   }else{
//                       cout<<"D-B"<<endl;
                       cout<<wins[positionConvertor[a]].first - (wins[positionConvertor[a]].first-r+wins[positionConvertor[a]].second-1)<<endl;
                   }
                }
            }
        }else{
            if(positionConvertor[a]==big){
//                cout<<"B"<<endl;
                cout<<r-(a-1)+(rounds>0)<<endl;
            }else{
//                cout<<"E"<<endl;
                cout<<wins[positionConvertor[a]].first<<endl;
            }
        }
    }
}

int main() {
    DedSec;
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}
