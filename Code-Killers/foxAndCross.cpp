#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, count = 0;
    cin >> n;
    char arr[n][n];
    bool visited[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = false;
            cin >> arr[i][j];
            if(arr[i][j] == '#'){
                count++;
            }
        }
    }
    if(count % 5 == 0){
        bool bo = true;
        for(int i = 0; i < n && bo; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] == '#' && !visited[i][j]){
                    visited[i][j] = true;
                    if(arr[i+1][j] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#' && arr[i+2][j] == '#'){
                        visited[i+1][j] = true, visited[i+1][j-1] = true, visited[i+1][j+1] = true, visited[i+2][j] = true;
                    }
                    else{
                        bo = false;
                        break;
                    }
                }
            }
        }
        if(bo){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
    return 0;
}