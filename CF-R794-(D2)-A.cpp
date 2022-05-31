#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int c=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            int a=arr[0];
            if(a==arr[j])
            {
                c++;
            }
        }
        if(c==n) {
            cout <<"YES\n";
        }
        else
        {
            int counter=0;
            for(int j=0;j<n;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                {
                    if(k==n-j-1)
                    {
                        continue;
                    }
                    else
                    {
                        sum += arr[k];
                    }
                }
                if(sum/float(n-1)==(float)arr[n-j-1])
                {
                    counter++;
                }
            }
            if(counter>0) {
                cout << "YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
