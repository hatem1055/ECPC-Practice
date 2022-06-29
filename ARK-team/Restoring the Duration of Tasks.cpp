    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int n;
            cin>>n;
            int arr1[n] ,arr2[n];
            for(int j=0;j<n;j++)
            {
                cin>>arr1[j];
            }
            for(int j=0;j<n;j++)
            {
                cin>>arr2[j];
            }
            for(int j=0;j<n;j++) {
                if(j==0){
                    cout << arr2[0] - arr1[0] << ' ';
                }
                else {
                    if (arr1[j] > arr2[j - 1]) {
                        cout << arr2[j] - arr1[j] << ' ';
                    } else {
                        cout<<arr2[j]-arr2[j-1]<<' ';
                    }
                }
            }
            cout<<'\n';
        }
        return 0;
    }
