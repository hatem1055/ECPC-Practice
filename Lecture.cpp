//https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>
using namespace std ;

vector <string> words ;

bool find(string word){
    for(string str: words){
        if(str == word){
            return true;
        }
    }
    return false;
}

int main(){
    map <string,string> sub;
    int m , n ;
    cin >> m >> n;
    string str1 , str2 ;
    for (int i = 0 ; i < n ; i ++){
        cin >> str1 >> str2 ;

        if (str1.size() > str2.size()){
            words.push_back(str2);
            sub[str1] = str2;
        }
        else{
          words.push_back(str1);
            sub[str2] = str1;   
        }
    }
    string str, result = "";
    while (m--){
        cin >> str ;
        if (find(str)){
            result = result + str + " ";
        }
        else if (!find(str) && str.size() == sub[str].size()){
            result = result + str + " ";
        }
        else {
            result = result + sub[str] +" " ;
        }
    }
    cout << result ;
}

