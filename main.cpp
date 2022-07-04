#include <iostream>
using namespace std;

int main() {
    int num,solved{0},accepted{0};
    cin>>num;
    int arr[num][3];
    for(int c=0;c<num;c++){
        for(int x=0;x<3;x++){
            cin>>arr[c][x];
        }
    }
    for(int i = 0;i<num;i++){
        solved=0;
        for(int j=0;j < 3;j++){
           if(arr[i][j]==1){
               solved+=1;
           }else{
               continue;
           }
        }
        if(solved>=2){
            accepted+=1;
        }
    }
    cout<<accepted;


}
