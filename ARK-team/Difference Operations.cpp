    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while(t--) {
            int n;cin>>n;int arr[n];bool found=false;for(int i=0;i<n;i++){cin>>arr[i];if(i!=0&&arr[i]%arr[0]!=0)found=true;}
            if(found)cout<<"no\n";else cout<<"yes\n";
        }
    return 0;
    }
