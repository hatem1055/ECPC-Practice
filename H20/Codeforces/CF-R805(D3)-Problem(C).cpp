#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        map<int,vector<int>>findMe;
        int temp;
        for(int i=1;i<=n;i++){
            cin>>temp;
            findMe[temp].push_back(i);
        }
        while (k--){
            int left,right;
            cin>>left>>right;
            vector<int>leftIndexes = findMe[left];
            vector<int>rightIndexes = findMe[right];
 
            if(leftIndexes.empty() || rightIndexes.empty()){
                cout<<"NO"<<endl;
            }else{
                int leftIndex = *min_element(leftIndexes.begin(),leftIndexes.end());
                int rightIndex = *max_element(rightIndexes.begin(),rightIndexes.end());
                if(leftIndex<=rightIndex){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
 
    return 0;
}
