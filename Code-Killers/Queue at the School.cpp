#include<iostream>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(t--){
       for(int i=0;i<n-1;i++){
           if((arr[i]=='B')&&(arr[i+1]=='G')){
               swap(arr[i],arr[i+1]);
               i++;
           }
       }}


   for(int i=0;i<n;i++){
       cout<<arr[i];
   }



}








