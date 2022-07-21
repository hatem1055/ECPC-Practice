#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int c=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]==a[i+1]){
            c+=1;
            if(c==7){
                cout<<"YES";
                return 0;
            }
        }else{
            c=1;
        }
    }
    cout<<"NO";
}