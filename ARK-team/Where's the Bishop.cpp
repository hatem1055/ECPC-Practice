#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        string nw_ln;
        getline(cin,nw_ln);
        string arr[8];
        for(int i=0;i<8;i++){
            cin>> arr[i];
            if(i>=2 ){
                int c1=count(arr[i-2].begin(),arr[i-2].end(),'#');
                int c2=count(arr[i-1].begin(),arr[i-1].end(),'#');
                int c3=count(arr[i].begin(),arr[i].end(),'#');
                if(c1==2 && c2==1 && c3==2)
                    cout<< i <<' ' <<int(arr[i-1].find('#'))+1<<'\n';
            }
        }
    }
    return 0;
}
