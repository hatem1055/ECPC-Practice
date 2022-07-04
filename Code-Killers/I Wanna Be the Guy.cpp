#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
int n,p,q,count=0;
vector<int>v;
cin>>n;
for(int i=0;i<2;i++){
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>q;
        v.push_back(q);
    }
}
sort(v.begin(),v.end());
for(int i=1;i<=n;i++){
    count=0;
    for(int j=0;j<v.size();j++){
        if(v[j]==i)
            count++;
    }
    if(count ==0){
        cout<<"Oh, my keyboard!";
        return 0;
    }
}
cout<<"I become the guy.";


}








