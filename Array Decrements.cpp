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
            int n,c=0;
            cin>>n;
            int arr1[n] ,arr2[n];
            for(int j=0;j<n;j++)
            {
                cin>>arr1[j];
            }
            for(int j=0;j<n;j++)
            {
                cin>>arr2[j];
                c=max(c,arr1[j]-arr2[j]);
            }
            int flag=true;
            for(int j=0;j<n;j++)
            {
                if(arr1[j]-arr2[j]!=c && arr2[j]!=0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false) cout<<"NO\n";
            else cout<<"YES\n";
        }
        return 0;
    }
