#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int nofplayers,appendance{0};
        nofplayers = 4;
        int arr[nofplayers];
        for(int i =0; i <nofplayers;i++){
            cin>>arr[i];
        }
        for(int j=0;j<1;j++){
            for(int c=1;c<nofplayers;c++){
                if(arr[j]<arr[c]){
                    appendance+=1;
                }
                else{continue;}
            }
        }
        cout<<appendance<<endl;
    }
}
