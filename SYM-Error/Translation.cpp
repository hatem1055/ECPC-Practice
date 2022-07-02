// created by shahd moamen
// link :https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
string t;
cin>>s>>t;
reverse(t.begin(), t.end());
if (s==t)
    cout<< "YES";
else
    cout<<"NO";
    return 0;
}
