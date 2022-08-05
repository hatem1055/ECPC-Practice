#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cin >> n;
    string s = "";
    string s1;
    cin >> s1;
    for (int i=0;i < s1.size();i++){
        char word = s1[i];
        s+=word;
        i+=c;
        c++;
    }
    cout << s << endl;
}
