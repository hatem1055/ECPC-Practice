#include <iostream>
using  namespace  std;
void  grass(){
    int x,y,i,j;
    cin>>x>>y>>i>>j;
    if(x==0 && y==0 && i==0 && j==0){
        cout<<0<<endl;
    }
    else if(x==1 && y==1 && i==1 && j==1){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        grass();
    }
}