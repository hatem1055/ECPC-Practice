#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t,n,y,mx=0,counter=0;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        counter=0;
        mx=0;
        for(int j=0;j<n;j++)
        {
            cin >>y;
            if(y>=mx)
            {
                mx=y;
            }
            else if(y<mx)
            {
                mx=0;
                counter++;
            }
        }
        cout <<counter<< '\n';
    }
}
