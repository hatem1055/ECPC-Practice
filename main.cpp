#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int price, coin;
cin >> price >> coin;
int counter = 0;
int result = 0;

while(true){
    counter++;
    result = price*counter;

    if(result%10 == 0 || result%10 == coin){
        break;
    }
}

cout << counter << endl;
}
