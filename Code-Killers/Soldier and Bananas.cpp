#include <bits/stdc++.h>

using namespace std;
int main(){
int k,n,w,count=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++){
    count+=(i*k);
}
if(count>n)
    cout<<count-n;
else
    cout<<0;

}




