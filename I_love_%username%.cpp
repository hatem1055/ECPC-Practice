#include <iostream>
using namespace std;
int main(){
  int n,points,size,amazing=0;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
      cin >> arr[i];
  }
  int max=arr[0],min=arr[0];
  for(int i=1;i<size;i++){
      if(arr[i]>max){
          max = arr[i];
      amazing++;}
      if(arr[i]<min){
          min = arr[i];
          amazing++;}
  }
  cout<<amazing;






}






