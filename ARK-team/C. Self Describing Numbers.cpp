#include <bits/stdc++.h>
using namespace std ;
int main(){
    int c ;
    cin >> c ;
    while(c--){
        string str;
        cin >> str ;
        int n = str.size();
        bool flag = 1 ;
        for(int i = 0 ; i < n ; i++ ){
            int c=0 ;
            for(int j = 0 ; j < n ; j++){
                
                if (str[j]-'0' == i){
                    c++;
                }
            }
           
            if(c != str[i]-'0'){
                flag = 0 ;
                break;
            }
        }
        if(flag){
            cout <<"self-describing" << endl;
        }
        else{
            cout << "not self-describing" << endl ;
        }

    }
}