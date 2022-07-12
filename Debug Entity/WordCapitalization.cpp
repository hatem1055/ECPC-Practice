#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cin>>word;
    if(word.size()>10e3){
        cin>>word;
    }
    word[0]= toupper(word[0]);
    cout<<word;
}