#include <bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool is_palindrome(string s){
    string p = s;
    reverse(p.begin(),p.end());
    if(p==s)
        return true;
    else
        return false;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
         ll n;
         string num,ans;
         cin>>n;
         cin>>num;
         if(num[0]!='9'){
             for(int i=0;i<n;i++){
                 int x = num[i]-'0';
                 int y = 9-x;
                 ans+=(y+'0');
             }

         }
         else{
             int cnt=0;
             for(int i=n-1;i>=0;i--){
                 int x = num[i]-'0';
                 x+=cnt;
                 if(x>1){
                     int y = 11-x;
                     cnt =1;
                     ans+=(y+'0');
                 }
                 else{
                     cnt=0;
                     int y = 1-x;
                     ans+=(y+'0');
                 }



             }
             reverse(ans.begin(),ans.end());

         }

         cout<<ans<<endl;

    }









    }














    // alpha[97,122]
    // x y         a[i]==x    a[i]=y   a[










