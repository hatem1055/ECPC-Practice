    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        int t; cin>>t;
        while(t--){
            int n;cin>>n;int x;cin>>x;
            int arr[2*n];
            for(int i=0;i<2*n;i++){
                cin>>arr[i];
            }
            sort(arr,arr+2*n);
            vector<int>v1;vector<int>v2;
            for(int i=0;i<n;i++){
                v1.push_back(arr[i]);
            }
            for(int i=n;i<2*n;i++){
                v2.push_back(arr[i]);
            }
            int c=0;
            for(int i=0;i<n;i++){
                if(v2[i]-v1[i]>=x){
                    c++;
                }
            }
            if(c==n)cout<<"YES\n";
            else cout<<"NO\n";
        }
        return 0;
    }
