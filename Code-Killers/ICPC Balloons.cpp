#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    string s;
    for(int i =0;i < t ; i++){
        int c=2;
        cin >> n;
        cin >> s;
        sort(s.begin(),s.end());
        for(int i =1;i < s.size();i++){
            if(s[i]!=s[i-1]){
                c+=2;
            }
            else{
                c+=1;
            }
        }
        cout << c << endl;
    }
}
