#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    string m;
    cin>>m;
    vector<char>ref;
    int count=0,day=0;
    for(int i=0;i<m.length();i++){
        if(count==3){
           if(find(ref.begin(),ref.end(),m[i])==ref.end()){
               count = 0;
               day++;
               ref.clear();
           }
        }
        if(find(ref.begin(),ref.end(),m[i])==ref.end()){
            count++;
            ref.push_back(m[i]);
        }

    }
    if(count==0)
        cout<<day<<endl;
    else
        cout<<day+1<<endl;

  }
}


























