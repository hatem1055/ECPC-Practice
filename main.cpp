#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string name;
cin >> name;
int counter;
int flag = 1;

for (int i = 0; i < name.size(); i++){
    for(int z=i+1; z < name.size(); z++){
        if(name[i] == name[z]){
            flag = 0;
            break;
        }
    }
    if(flag){
        counter++;
    }
    flag = 1;
}
    if(counter%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}

