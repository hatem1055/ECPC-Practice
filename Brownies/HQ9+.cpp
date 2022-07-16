#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int cnt=0;
   // int cnt2=0;
    for (int i=0;i<str.size();i++){
        if (str[i]=='H'||str[i]=='Q'||str[i]=='9'){
           cnt++;
            break;
        }
    }
    if (cnt==1)
        cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

