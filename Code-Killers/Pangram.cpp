#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
    int n;
    cin>>n;
    char string[n];
    vector<char>ref;
    for(int i=0;i<n;i++){
        cin>>string[i];
        string[i]= tolower(string[i]);
        if(find(ref.begin(),ref.end(),string[i])==ref.end())
            ref.push_back(string[i]);
    }
    if(ref.size()==26)
        cout<<"YES";
    else
        cout<<"NO";


}








