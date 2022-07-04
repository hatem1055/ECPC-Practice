#include <bits/stdc++.h>
using namespace std;

void printBlockPair(vector<vector<int>>b1,vector<vector<int>>b2,int amount){
    for(int i=0;i<2;i++){
        for(int j=0;j<amount/2;j++){
            for(int k=0;k<2;k++){
                cout<<b1[i][k]<<" ";
            }
            for(int k=0;k<2;k++){
                cout<<b2[i][k]<<" ";
            }
        }
        cout<<endl;
    }

}

int main() {
    vector<vector<int>> block1 = {{1, 0},
                                  {0, 1}};
    vector<vector<int>> block2 = {{0, 1},
                                  {1, 0}};
    int t;
    cin >> t;
    while (t--) {
        int row, column;
        cin >> row >> column;
        int nBlocks = column / 2;
        row /=2;
        if (nBlocks % 2 == 0) {
            for (int i = 1; i <= row; i++) {
                if(i%2==1){
                    printBlockPair(block1,block2,nBlocks);
                }else{
                    printBlockPair(block2,block1,nBlocks);
                }
            }

        } else {
            for (int i = 1; i <= row; i++) {
                if(i%2==1){
                    for(int j=0;j<2;j++){
                        for(int k=1;k<=(nBlocks-1)/2;k++){
                            for(int l=0;l<2;l++){
                                cout<<block1[j][l]<<" ";
                            }
                            for(int l=0;l<2;l++){
                                cout<<block2[j][l]<<" ";
                            }
                        }
                        for(int l=0;l<2;l++){
                            cout<<block1[j][l]<<" ";
                        }
                        cout<<endl;
                    }
                }else{
                    for(int j=0;j<2;j++){
                        for(int k=1;k<=(nBlocks-1)/2;k++){
                            for(int l=0;l<2;l++){
                                cout<<block2[j][l]<<" ";
                            }
                            for(int l=0;l<2;l++){
                                cout<<block1[j][l]<<" ";
                            }
                        }
                        for(int l=0;l<2;l++){
                            cout<<block2[j][l]<<" ";
                        }
                        cout<<endl;
                    }
                }

            }

        }

    }
}
