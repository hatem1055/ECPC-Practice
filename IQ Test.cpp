#include <iostream>
using namespace std;
int main(){
  int size,count=0;
  cin >> size;
  int arr[size];
  for(int i=0;i<size;i++){
      cin >> arr[i];
  }
  for(int i=0;i<size;i++){
      if(arr[i]%2==0)
          count++;

  }
  if(count == size-1){
      for(int i=0;i<size;i++){
          if((arr[i]%2)!=0){
              cout << i+1;
              break;}
      }
  }
  else{
      for(int i=0;i<size;i++){
          if((arr[i]%2)==0){
              cout << i+1;
              break;
      }}

  }



}






