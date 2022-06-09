#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int>database{};
    int t{0};
    cin>>t;
    string test{};
    while (t--){
        cin>>test;
        database[test]++;
        if(database[test]>1){
            cout<<test<<database[test]-1<<endl;
        }else{
            cout<<"OK"<<endl;
        }
    }
    return 0;
}
