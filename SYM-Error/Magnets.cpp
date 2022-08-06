#include<iostream>
using namespace std;

int main (){

    int n;
    cin>>n;
    int arr[n],i,count=1;
    for (i =0; i<n;i++)
        cin>>arr[i];
    for (int j=0 ;j<n-1;j++){
        if (arr[j]!=arr[j+1])
            count++;
    }
    cout<<count<<endl;

    return 0;
}