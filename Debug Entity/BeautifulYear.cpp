#include<iostream>
#include<string>
using namespace std;

int main(){
    int y;
    int x=0;
    cin>>y;
  while(true){
      y+=1;
        string year;
        year = to_string(y);
        if(year[0]!=year[1] && year[0]!=year[2] && year[0]!=year[3] && year[1]!=year[2] && year[1]!=year[3] && year[2]!=year[3]){
            cout << year;
            break;
        }

    }
}
