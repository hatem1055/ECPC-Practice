//https://codeforces.com/problemset/problem/490/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , p= 0 , m = 0 , pE = 0,ans = 0;
    cin >> n ;
    int * arr = new int [n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        switch (arr[i])
        {
        case 1:
           p++;
            break;
        case 2:
            m++;
             break;
        default:
            pE++;
            break;
        }
    }
    if(p < m ){
        if(p < pE){
            ans = p ;
        }
        else{
            ans = pE ;
        }
    }
    else{
        if(m < pE){
            ans = m; 
        }
        else{
            ans = pE;
        } 
    }
     cout << ans << endl ;
     if (ans != 0)
    for(int i = 0 ; i < ans ; i++ ){
        for(int j = 0 ; j < n ; j++){
            if (arr[j] == 1 ){
                cout << j+1 << " ";
                arr[j]=0;
                break;
            }
        }
         for(int j = 0 ; j < n ; j++){
            if (arr[j] == 2 ){
                cout << j+1 << " ";
                arr[j]=0;
                break;
            }
        }
         for(int j = 0 ; j < n ; j++){
            if (arr[j] == 3 ){
                cout << j+1 << " ";
                arr[j]=0;
                break;
            }
        }
        cout << endl ;
    }


}