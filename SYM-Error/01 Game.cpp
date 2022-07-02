#include <iostream>
#include<bits/stdc++.h>

using namespace std;

    int main()
    {
        int x=1;
        cin>>x;
        while(x--)
        {
            string s;
            cin>>s;
            int zero=0,one=0;
            for(auto i:s)
            {
                if(i=='0')
                    zero++;
                else
                    one++;
            }
            int ans=min(zero,one);
            if(ans%2)
                cout<<"DA"<<endl;
            else
                cout<<"NET"<<endl;
        }
        return 0;
    }

