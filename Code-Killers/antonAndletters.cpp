
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<char>ref;
   string s;
   getline(cin,s);
   for(int i=0;i<s.size();i++){
       if((s[i]==',')||(s[i]=='{')||(s[i]=='}')||(s[i])==' '){
       }
       else{
           if(find(ref.begin(),ref.end(),s[i])==ref.end())
               ref.push_back(s[i]);
          }
   }
   cout<<ref.size();

}
