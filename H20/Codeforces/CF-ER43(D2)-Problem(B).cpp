#include <bits/stdc++.h>
using namespace std;

int main(){
    long long rows,cols;
    unsigned long long k;
    cin>>rows>>cols>>k;
    long long curRow{1},curCol{1};
    unsigned long long moves = rows*cols;
    long long requiredMoves = k%moves;
    if(requiredMoves<=rows-1){
        curRow += requiredMoves;
        cout<<curRow<<" "<<curCol<<endl;
    }else{
        requiredMoves -= (rows-1);
        curRow = rows;
        int i=1;
        while (requiredMoves>(cols-1)*i){
            curRow--;
            i++;
        }
        if(curRow==rows){
            curCol+=requiredMoves;
        }else{
            long long rowBefore = curRow + 1;
            if(rowBefore%2==0){
                requiredMoves -= (cols-1) * abs(curRow - rows);
                curCol = cols;
                requiredMoves--;
                while (requiredMoves--){
                    curCol--;
                }
            }else{
                requiredMoves -= (cols-1) * abs(curRow - rows);
                curCol = 2;
                requiredMoves--;
                while (requiredMoves--){
                    curCol++;
                }
            }
        }
        cout<<curRow<<" "<<curCol<<endl;
    }

}
