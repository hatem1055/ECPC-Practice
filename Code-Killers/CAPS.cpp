#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
void files() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    bool case1 = false,case2 = false;
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]== toupper(s[i]))
            count++;}
    if(count == s.size())
        case1=true;
    else if((count==s.size()-1)&&(s[0]!= toupper(s[0])))
        case2 = true;

    if( case2){
        s[0]= toupper(s[0]);
        for(int i=1;i<s.length();i++)
            s[i]= tolower(s[i]);
    }
    if(case1){
        for(int i=0;i<s.length();i++)
            s[i]= tolower(s[i]);
    }
    cout<<s;

}