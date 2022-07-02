#include<iostream>
using namespace std;

int main(){
    int N,M;
    cin >> N>> M;
    if(N<1 || M>100)
    {
        cin >> N >> M;
    }
    if(N<M || M<N)
    {
        cout << "drink drink drink";
    }
    else
    {
        cout << "lazy";
    }
}