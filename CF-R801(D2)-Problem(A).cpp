#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t{0};
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        int biggestNumber = 0;
        pair<int,int>bNC{};
        int temp{0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>temp;
                if(i==0 && j==0){
                    biggestNumber = temp;
                    bNC.first = i;
                    bNC.second=j;
                }else{
                    if(temp>biggestNumber){
                        biggestNumber = temp;
                        bNC.first = i;
                        bNC.second = j;
                    }
                }
            }
        }
        int h = max(bNC.first+1,n-bNC.first);
        int w = max(bNC.second+1,m-bNC.second);
        cout<<h*w<<endl;
    }
    return 0;
}
