#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int buttom;

void findButtom(bool arr[]){
    if(arr[buttom]){
        cout << buttom << ' ';
        buttom--;
        findButtom(arr);
    }
}

int main(){
    int n; 
    cin >> n;
    buttom = n;
    bool arr[n];
    memset(arr, false , sizeof(arr));
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        if(x == buttom){
            cout << buttom << ' ';
            buttom--;
            findButtom(arr);
        }
        else{
            arr[x] = true;
        }
        cout << endl;
    }
    return 0; 
}