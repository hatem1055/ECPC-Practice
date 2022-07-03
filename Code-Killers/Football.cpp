#include<iostream>
#include<string>
using namespace std;

int main() {
   string team;
   cin>>team;
   int count=1;
   for(int i=0;i<team.length()-1;i++){
       if(team[i]==team[i+1]){
           count++;
           if(count==7){
               cout<<"YES";
               return 0;
           }
       }else
           count=1;

   }
   cout<<"NO";


}

