#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
        }
        bool flag = true,zero = false;
 
        int diff=a[0]-b[0];
        if(diff < 0)
            flag = false;
        if(!b[0])
            zero = true;
        for(int i = 1 ; i < n ; i++){
            if(a[i]<b[i]){
                flag = false ;
                break;
            }else{
                if(b[i]){
                    if(zero){
                        if(a[i]-b[i] < diff){
                            flag = false;
                            break;
                        }
                        diff = a[i]-b[i];
                        zero = false;
                    }else{
                        if(a[i]-b[i] != diff){
                            flag = false;
                            break;
                        }
                    }
                }else {
                    if (zero){
                        diff = max(diff, a[i] - b[i]);
                    }else{
                        if(a[i]-b[i]>diff){
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }
        if(flag){
            cout<< "YES"<< endl;
        }else {
            cout<< "NO"<< endl;
        }
    }
 
 
    return 0;
}