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
            int n;
            cin>>n;
            int arr[n];
            for(int j=0;j<n;j++)
            {
                cin>>arr[j];
            }
            int n_zero=0;
            for(int j=0;j<n;j++)
            {
                if (arr[j] == 0)
                {
                    n_zero++;
                }
            }
            int counter=0;
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[j]==arr[k])
                    {
                        counter++;
                    }
                }
            }
            if(n_zero==0) {
                if (counter > 0) {
                    cout << n << '\n';
                } else {
                    cout << n + 1 << '\n';
                }
            }
            else{
                cout<<n-n_zero<<'\n';
            }
        }
        return 0;
    }
