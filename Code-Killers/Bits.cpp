#include <bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                if(s[i+1]=='+'||s[i-1]=='+')
                    x++;
                else
                    x--;

            }
        }
    }
    cout<<x<<endl;









    }














    // alpha[97,122]
    // x y         a[i]==x    a[i]=y   a[










