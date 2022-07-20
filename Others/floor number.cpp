#include <iostream>
using  namespace  std;
void floorno(){
    long long n,x;
    cin>>n>>x;

    if(n<=2)cout<<1<<endl;

    else{

        long long a=2;
        long long floor=2;
        while(a+x<n){
            a+=x;
            floor++;
        }
        cout<<floor<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        floorno();
    }
}
