#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int nDocs = t;
    int s,d;
    vector<int>days;
    while (t--){
        cin>>s>>d;
        if(days.empty()){
            days.push_back(s);
        }else{
            while (s<=days[days.size()-1]) s+=d;
            days.push_back(s);
        }
    }
    cout<<s;

    return 0;
}
