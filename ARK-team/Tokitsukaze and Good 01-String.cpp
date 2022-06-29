    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int n;
            cin>>n;
            string s;
            cin >>s;
            int c=0;
            for(int j=1;j<n;j+=2)
            {
                if(s[j]!=s[j-1])
                {
                    c++;
                }
            }
            cout <<c<<'\n';
        }
        return 0;
    }
