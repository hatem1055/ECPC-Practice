#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cX=0;
    int cx=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='X') cX++;
        else cx++;
    }
    if(cx<n/2 ) {
        cout << n/2-cx<<endl;
        int y=n/2-cx;
        for(int i=0;i<y;i++)
        {
            if(s[i]!='x'){s[i]='x';}
            else{y++;}
        }
        cout << s;
    }
    else if(cX<n/2) {
        cout << n/2-cX<<endl;
        int x=n/2-cX;
        for(int i=0;i<x;i++)
        {
            if(s[i]!='X'){s[i]='X';}
            else{x++;}
        }
        cout << s;
    }
    else if(cx==n/2 && cX==n/2)
    {
        cout <<0 <<endl;
        cout <<s;
    }
}
