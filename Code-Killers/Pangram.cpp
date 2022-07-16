#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    bool arr[26];
    memset(arr, false , sizeof(arr));
    int n;
    string str;
    cin >> n;
    cin >> str;
    for(char ch : str){
        arr[tolower(ch) - 'a'] = true;
    }
    if(all_of(arr, arr + 26, [](bool i){return i;})){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}