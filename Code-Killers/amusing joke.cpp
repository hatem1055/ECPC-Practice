#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    string s1,s2,s3,res;
    cin >> s1 >> s2 >> s3;
    res = s1 + s2;
    sort(res.begin(),res.end());
    sort(s3.begin(),s3.end());
    if(res==s3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
