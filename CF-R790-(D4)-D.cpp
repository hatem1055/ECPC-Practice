#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int row,column;
        cin>>row>>column;
        int arr[row][column];
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<column;k++)
            {
                cin>>arr[j][k];
            }
        }
        int mx=0;
        int sum=0;
        int tj,tk;
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<column;k++)
            {
                sum=0;
                tj=j;
                tk=k;
                while(tj>=0 && tk >=0 && tj <row && tk <column)
                {
                    sum+=arr[tj][tk];
                    tj--;
                    tk++;
                }
                tj=j-1;
                tk=k-1;
                while(tj>=0 && tk >=0 && tj <row && tk <column)
                {
                    sum+=arr[tj][tk];
                    tj--;
                    tk--;
                }
                tj=j+1;
                tk=k-1;
                while(tj>=0 && tk >=0 && tj <row && tk <column)
                {
                    sum+=arr[tj][tk];
                    tj++;
                    tk--;
                }
                tj=j+1;
                tk=k+1;
                while(tj>=0 && tk >=0 && tj <row && tk <column)
                {
                    sum+=arr[tj][tk];
                    tj++;
                    tk++;
                }
                mx=max(mx,sum);
            }
        }
        cout <<mx<<'\n';
    }
    return 0;
}
