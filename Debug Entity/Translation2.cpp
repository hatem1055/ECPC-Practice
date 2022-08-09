#include<iostream>
using namespace std;

int main(){
    string s,t;
    int n=0;
    cin>>s;
    cin>>t;
for(int i=0;i<t.length();i++){
    if(t[i]!=s[s.length()-i-1]){
        n++;
        break;
    }
}
if(n==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
