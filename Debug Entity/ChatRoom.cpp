#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    string test ="hello";
    int it=0;
    for(int i=0; i<s.size();++i){
        if(it<test.size() && s[i]== test[it]){
            it++;
        }
    }
    if(test.size()==it){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
