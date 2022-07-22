#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        int cnt=0;
        for (int i=1;i<4;i++){
            if (arr[0]<arr[i]){
                cnt ++;
            }
        }
        cout<<cnt<<endl;
    }
}
