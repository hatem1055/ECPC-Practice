#include <iostream>
using namespace std;
int main() {
    string s,l="hello";
    int c=0;
    cin>>s;
    int b =0;
    for(int k =0;k<s.size();k++){
        if(s[k] == l[b]){
            b++;
            c++;
        }
        if(c == 5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}
