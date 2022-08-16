
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
    int n;
    cin>>n;
    int cap=0;
    int now=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        now-=a;
        now+=b;
        cap=max(cap,now);

    }
    cout<<cap<<endl;

}
