#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define frj(n) for(int j = 0 ; j < n ;j++)

#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);

using namespace std;
bool next(string ptr , string nex){

}
int main() {
    kareemS
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    //cin >> t;
    while (t--) {
       int k;
       cin >> k;
       string str ;
       cin >> str;
       int left = 0,right=0;
       int rep =0;
       map<char,int> ch;
       pair<int ,int> max_sub{1,1};
       while(left<str.size() && right < str.size()){
           if(ch[str[right]]==0){
               rep++;
           }
           ch[str[right]]++;
           while (rep>k){
               ch[str[left]]--;
               if(ch[str[left]]==0)rep--;
               left++;
           }
           if(right-left > max_sub.Y-max_sub.X){
               max_sub = { left+1 , right+1};
           }
           right++;
       }
       cout << max_sub.X << " " << max_sub.Y;

    }
}
