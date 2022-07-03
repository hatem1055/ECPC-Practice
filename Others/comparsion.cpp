//code link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
using namespace std;
#include <iostream>
int main() {
    int a, b;
    string op;
    cin >> a >> op >> b;
    if (op ==">"&& a>b) {
        cout << "Right" << endl;
    }
    else if(op =="<"&& a<b){
        cout << "Right" << endl;

    }
    else if(op =="="&& a==b){
        cout << "Right" << endl;

    }


    else{
        cout<<"Wrong";
    }

    return 0;
}

