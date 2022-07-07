//https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    vector <int>k;
    int one=0,two=0,three=0;
    cin>>s;
    for(int i =0;i<s.size();i=i+2){
        if(s[i] == '1'){
            k.push_back(1);
        }else if(s[i] == '2'){
            k.push_back(2);
        }else if(s[i] == '3'){
            k.push_back(3);}}
   sort(k.begin(), k.end());
    for(int i =0;i<k.size();i++){
        cout<<k[i];
        if(i<k.size()-1){
            cout<<"+";
        }
    }

    return 0;
}
