#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main(){vector<int>ref;
for(int i=0;i<4;i++){
    int s;
    cin>>s;
    if(find(ref.begin(),ref.end(),s)==ref.end())
        ref.push_back(s);

}
cout<<4-(ref.size());




}








