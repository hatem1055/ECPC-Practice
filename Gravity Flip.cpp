#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
 int size,data;
 vector<int>v;
 cin >> size;
 for(int i=0;i<size;i++){
     cin >> data;
     v.push_back(data);
 }
    sort(v.begin(),v.end());
 for(int i=0;i<size;i++){
     cout << v[i]<<" ";
 }
}






