#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
vector<int> result;

void topLogicalSort(int student){
    visited[student] = true;
    for(int j = 0; j < arr[student].size(); j++){
        int child = arr[student][j];
        if(!visited[child]){
            topLogicalSort(child);
        }
    }
    result.push_back(student);
}

int main(){
    int n, k;
    cin >> n;
    cin >> k;
    arr = vector<vector<int>> (n);
    visited = vector<bool> (n);
    vector<int> finalResult (n);
    for(int i = 0; i < k; i++){
        int w;
        cin >> w;
        for(int j = 0; j < w; j++){
            int a;
            cin >> a;
            arr[i].push_back(a-1);
        }
    }
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            topLogicalSort(i);
        }
    }
    for(int i = 0; i < n-1; i++){
        finalResult[result[i]] = result[i+1]+1;
    }
    finalResult[result[n-1]] = 0;
    for(int i:finalResult){
        cout << i << endl;
    }
    return 0;
}