#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int m,n,k;
        cin >> n>> m>> k;
        string a,b;
        string c;
        cin >> a>>b;
        int ka = 0 , kb =0,ia=0,ib=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i = 0 ;i < n+m;i++){
            if(ia >= n){break;}
            if(ib >= m){break;}
            if(a[ia]>b[ib] ){
                if(kb<k){
                    c+=b[ib];
                    kb++;
                    ib++;
                    ka=0;
                }else{
                    c+=a[ia];
                    ia++;
                    ka++;
                    kb=0;
                }
            }else{
                if(ka<k){
                    c+=a[ia];
                    ka++;
                    ia++;
                    kb=0;
                }else{
                    c+=b[ib];
                    kb++;
                    ib++;
                    ka=0;
                }
            }
        }
 
    cout << c<< endl;
 
    }return 0;
}
