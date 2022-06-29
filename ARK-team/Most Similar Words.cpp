#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        string arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int sums[(n*(n-1))/2];
        int count=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum=0;
                for(int u=0;u<m;u++)
                {
                    sum+=abs((int)(arr[j][u])-(int)(arr[k][u]));
                }
                sums[count]=sum;
                count++;
            }
        }
        cout<<*min_element(sums, sums + ((n*(n-1))/2))<<'\n';
    }
    return 0;
}
