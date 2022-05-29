#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    long long smallest;
    cin>>t;
    while (t--){
        cin>>n;
        string num = to_string(n);
        if(n<100){
            cout<<n%10<<endl;
        } else{
            smallest = 0;
            for(int i=0;i<num.size();i++){
                if(smallest==0){
                    smallest = num[i]-'0';
                }else{
                    if(num[i]-'0'<smallest){
                        smallest = num[i] - '0';
                    }
                }
            }
            cout<<smallest<<endl;
        }

    }
    return 0;
}
