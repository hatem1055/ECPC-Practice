#include <bits/stdc++.h>
using namespace std;

int main(){
    string test;
    cin>>test;
    set<char>mchar;
    for(char r : test)
        mchar.insert(r);
    if(mchar.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

}
