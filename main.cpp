#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    int n,h,ans{0};
    cin>>n;
    cin>>h;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]>h){
            ans+=2;
        }else{
            ans+=1;
        }
    }
    cout<<ans;

}
