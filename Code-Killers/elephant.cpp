
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int x,int y){
   int max = (x > y) ? x : y;

    do
    {
        if (max % x == 0 && max % y == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);
}
bool Tprime(unsigned ll x){
    int c=0;
    for(unsigned long long i = 1; i <= x; i++){
        if(c>3)
            return false;
        if(x%i==0){
            c++;
        }
    }
    if(c==3)
      return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll x;
   cin>>x;
   if(x<=5)
       cout<<1<<endl;
   else{
       if(x%5==0)
           cout<<(x/5)<<endl;
       else
           cout<<(x/5)+1<<endl;
   }

}
