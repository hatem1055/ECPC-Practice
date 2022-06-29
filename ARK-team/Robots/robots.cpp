// created by kareem sakkary
// last change : 30/5/2022
// link : https://codeforces.com/problemset/problem/1680/B
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t; 
    for(int i = 0 ;i<t;i++){
        int rows , columns ;
        cin >> rows >> columns ;
        char cells [rows][columns];
        for(int j=0; j<rows;j++){
            string s ;
            cin >> s;
            for(int l=0 ;l<columns;l++){
                cells[j][l]=s[l];
            }
        }
        bool stuck = false;
        int c =0 ;
        while(cells[0][0]!='R'&&!stuck){
            bool up = true , left = true , right = true , down = true ;
            for(int j =0; j<rows;j++){
                for(int l = 0 ; l<columns ; l++){
                    if(cells[j][l]=='R'){
                        if(j-1<0){
                            up = false;
                        }
                        if(l-1<0){
                            left = false;
                            
                        }

                    }
                }
            }

             for(int j =0; j<rows;j++){
                for(int l = 0 ; l<columns ; l++){
                    if(cells[j][l]=='R'){
                        if(up){
                            cells[j][l] = 'E';
                            cells[j-1][l]='R';
                        }
                        else if(left){
                            cells[j][l] = 'E';
                            cells[j][l-1]='R';                  
                        }
                        else{
                            stuck = true;
                        }
                    }
                }
            }
        }
        if(!stuck){
            cout << "YES"<<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}