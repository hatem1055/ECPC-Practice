#include <iostream>
using namespace std;

int main() {
    int n,x=0;
    cin >> n;
    string s;
    for(int i=0;i < n;i++){
        cin >>s;
        if(s[0] == 'X' && s[1] == '+' && s[2] == '+'){
            x+=1;
        }
        else if(s[0] == '+' && s[1] == '+' && s[2] == 'X'){
            x+=1;
        }
        else if(s[0] == 'X' && s[1] == '-' && s[2] == '-'){
            x-=1;
        }
        else if(s[0] == '-' && s[1] == '-' && s[2] == 'X'){
            x-=1;
        }
    }
    cout << x << endl;
}
