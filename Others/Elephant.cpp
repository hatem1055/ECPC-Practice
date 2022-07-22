#include<iostream>

int main(){
    int n; scanf("%i", &n);
    if(n%5==0){
        printf("%i\n", n/5);
    }
    else printf("%i\n", n/5 +1);
    
}