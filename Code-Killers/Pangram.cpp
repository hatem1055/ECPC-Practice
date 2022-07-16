#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,c=0;
    string name;
    cin >> n;
    cin >> name;
    for(int i=0;i<name.size();i++){
        name[i]=tolower(name[i]);
    }
    for(int i=0;i<n;i++){
        sort(name.begin(),name.end());
        if(name[i]!=name[i+1]){
            c++;
        }
    }
    if(c==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
