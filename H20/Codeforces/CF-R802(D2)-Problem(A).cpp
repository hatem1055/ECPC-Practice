#include <iostream>
using namespace std;

int main(){
    int t{0};
    cin>>t;
    while(t--){
        int row,col;
        cin>>row>>col;
        long long sum = col*(col+1) / 2;
        for(int i=2;i<=row;i++){
            sum+=col*i;
        }
        cout<<sum<<endl;
    }
}
