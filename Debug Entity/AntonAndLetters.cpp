#include<iostream>
#include <unordered_set>
using namespace std;

int main(){
    string set;
    string chars="{, ";
    unordered_set<char>s;
    getline(cin,set);
    for(int i=0; i<set.size();i++) {
        if(set[i]=='{'||set[i]==',' ||set[i]==' ') {
            continue;
        }
            else if(set[i]=='}'){
                break;
            }
        else {
            s.insert(set[i]);
        }
    }
    cout<<s.size();
}