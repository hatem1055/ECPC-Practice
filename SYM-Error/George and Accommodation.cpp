#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,q,c=0,r,i;
    while(cin>>t)
    {
        for(i=1; i<=t; i++)
        {
            cin>>p>>q;
            r=abs(q-p);
            if(r>=2)
                c++;
        }

        cout<<c<<endl;
        c=0;
    }
}
