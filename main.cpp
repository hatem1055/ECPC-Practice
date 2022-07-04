#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin >> x;
int result = 0;

while(x>0){
    if(x%2==1){
        result++;
    }
    x/=2;
}

cout << result << endl;
}
