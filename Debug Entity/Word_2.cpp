#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cin>>word;
    int n=0,m=0;
    for(char i:word){
        if(islower(i)){
            n++;
        }
        else{
            m++;
        }
    }
    if(n>m){
        for(int i=0; i<word.size();i++){
            word[i] = tolower(word[i]);
        }
    }
    else if(n<m){
        for(int i=0;i<word.size();i++){
            word[i] = toupper(word[i]);
        }
    }
    else{
        for(int i=0; i<word.size();i++){
            word[i] = tolower(word[i]);
        }
    }
    cout<<word;
}

