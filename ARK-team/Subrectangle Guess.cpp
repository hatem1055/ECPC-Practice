    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
     
        int t; cin>>t;
        while(t--){
           int n,m; cin>>n>>m;
           long long int arr[n][m];
           long long int mx=-1000000001;
           for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                   cin>>arr[i][j];
                   mx=max(mx,arr[i][j]);
               }
           }
           bool flag=true;
            for(int i=0;i<n&&flag;i++){
                for(int j=0;j<m&&flag;j++){
                    if(arr[i][j]==mx){
                        if(i<=(n-1)/2){
                            i=n-i;
                        }
                        else i++;
                        if(j<=(m-1)/2){
                            j=m-j;
                        }
                        else j++;
                        cout<<i*j<<'\n';
                        flag=false;
                    }
                }
            }
        }
        return 0;
    }
