#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;
        long long a[n];
        for(int i =0 ; i < n ; i++){
            cin >> a[i];
        }
        int odd=0 , even=0;
        for(int i = 0 ; i< n ; i++){
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        if(odd){
            cout << even << endl;
        }else{
            bool flag = false;
            for(int i = 0 ;i < n ; i++){
                if((a[i]/2)%2==1){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << even << endl;
            }else{
                long long  mn = *min_element(a, a + n);
                int c = 0;
                while(mn%2==0){
                    mn/=2;
                    c++;
                }
                cout << c+even-1<< endl;
            }
        }
    }
    return 0;
}