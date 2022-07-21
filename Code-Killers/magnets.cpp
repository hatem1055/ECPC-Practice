#include <bits/stdc++.h>
#define ll long long

using namespace std;
void files(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,count=1;
    cin>>n;
    vector<int>ref;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       ref.push_back(x);
    }
    for(int i=1;i<ref.size();i++){
        if(ref[i]!=ref[i-1])
            count++;

    }
    cout<<count<<endl;






}








