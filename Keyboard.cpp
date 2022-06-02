//https://codeforces.com/contest/474/problem/A
//By: Rana Essam 

#include <bits/stdc++.h>
using namespace std ;
int main(){
    string letters ="qwertyuiopasdfghjkl;zxcvbnm,./";
    string word;
    char  pos;
    cin >> pos ;
    cin >> word ;
 
    int x = (pos == 'L' ? 1: -1);
 
    for (int i = 0 ; i < word.size(); i++){
        int p = letters.find(word[i]);
        word[i] = letters[p+x];
    }
    cout << word;
   
 
}
