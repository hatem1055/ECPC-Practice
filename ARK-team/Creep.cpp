    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        int t; cin>>t;
        while(t--){
           int a,b; cin>>a>>b;
           for(int i=0;i<min(a,b);i++){
               cout<<"01";
           }
           for(int i=0;i<abs(a-b);i++)
           {
               cout<< (a>b?0:1);
           }
           cout<<'\n';
        }
        return 0;
    }
