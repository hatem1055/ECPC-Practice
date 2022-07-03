#include <bits/stdc++.h>
using namespace std;
 
pair<int,bool> zeroFound(string number);
unsigned long long productDigits(string& number);
void getRidOfZeros();
 
unsigned long long container;
unsigned long long delta;
string number;
 
 
int main(){
    cin>>number;
    if(number.size()==1){
        cout<<number;
        return 0;
    }
    int indexStop =0;
    for(int i=1;i<number.size();i++){
        if(number[i]-'0' > number[i-1]-'0'){
            indexStop = i;
        }else{
            break;
        }
    }
      unsigned long long maximum = productDigits(number);
      unsigned long long resNines;
      int pointer = 0;
      for (int i = 0; i <= indexStop; i++) {
          string test;
          for (; pointer < i; pointer++) {
              test.push_back(number[pointer]);
          }
          test += to_string((number[i] - '0') - 1);
          resNines = pow(9, number.size() - test.size());
          maximum = max(productDigits(test) * resNines, maximum);
          pointer = 0;
      }
 
     cout<<maximum<<endl;
    return 0;
}
 
pair<int,bool> zeroFound(string number){
    pair<int,bool>result;
    int counter = 0;
    for(int i=number.size();i>=0;i--){
        if(number[i]=='0'){
         result.first = counter;
         result.second = true;
         return result;
        }
        counter++;
    }
    result.first = 0;
    result.second = false;
    return result;
}
unsigned long long productDigits(string& number){
    unsigned long long result = 1;
    int i=0;
    while (number[i]=='0' && i<number.size()){
        i++;
    }
    for(;i<number.size();i++){
        result*=number[i]-'0';
    }
    return result;
}
void getRidOfZeros(){
    pair<int,bool>test = zeroFound(number);
    while (test.second){
        container = stoull(number);
        delta = pow(10,test.first-1);
        container -= delta;
        number = to_string(container);
        test = zeroFound(number);
    }
}
