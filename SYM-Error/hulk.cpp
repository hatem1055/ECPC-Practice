#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1="I hate ";
    string s2="that I love ";
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            if (i!=0)
                cout<<"that ";
            cout<<s1;
        }
        else
            cout<<s2;
    }
    cout<<"it"<<endl;
    return 0;
}