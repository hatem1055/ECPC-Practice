#include <iostream>
//#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;


int main()
{
    kareemS
    int t;
    cin >>t;
    while(t--){
       int n;
       string s;
       cin>>n;
       cin>>s;
       int a=0,b=0,c=0;
       for(int i=0;i<n;i++){
           if(s[i]=='A')a++;
           if(s[i]=='B')b++;
           if(s[i]=='C')c++;
       }
       if(a+c==b)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;

}
