#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);

    int n,m,s;
    cin>>n>>m>>s;
    vector<string>lines(n);
    for(int i=0;i<n;i++){
        cin>>lines[i];
    }
    for(string line : lines){
        for(int i=0;i<s;i++){
            for(char c:line){
                for(int j=0;j<s;j++){
                    cout<<c;
                }
            }
            cout<<endl;
        }

    }

    return 0;
}
