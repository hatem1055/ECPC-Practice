//https://codeforces.com/problemset/problem/266/A
#include <iostream>
using namespace std;
int main() {
    int n,row;
    string word;
    cin>>n;
    cin>>word;
    for(int i=0;i<word.size()-1;i++){
        if(word[i]==word[i+1]){
            row++;
        }
    }
    cout<<row-1;
    return 0;
}
