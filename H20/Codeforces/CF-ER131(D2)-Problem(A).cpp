#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        vector<vector<int>>matrix(2,vector<int>(2,0));
        int counterOnes = 0;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>matrix[i][j];
                if(matrix[i][j]==1){
                    counterOnes++;
                }
            }
        }
        if(counterOnes==0){
            cout<<0<<endl;
        }else if(counterOnes==4){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}
