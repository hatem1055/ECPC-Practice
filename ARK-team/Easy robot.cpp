#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;


int main()
{
    kareemS
    int l;
    cin >> l;
    map<pair<int,int> , int> blocks;
    blocks [{6,6}]=1;
    blocks [{6,7}]=1;
    blocks [{7,6}]=1;
    blocks [{7,7}]=1;
    blocks [{9,2}]=1;
    blocks [{9,3}]=1;
    blocks [{10,2}]=1;
    blocks [{9,10}]=1;
    blocks [{9,11}]=1;
    blocks [{10,11}]=1;
    while(l--){
        int r , c;
        cin >> r >> c;
        int counter =0;
        string path = "";
        while ((!(r==3 && c ==3 )) && (!(r==10 && c ==3 )) ) {
            counter++;
            if (c > 3 && blocks[{r,c-1}]==0) { c--;  path +="L"; continue; }
            if (c < 3 && blocks[{r,c+1}]==0) { c++;  path +="R"; continue;}
            if (r > 3 ) { r-- ; path +="U"; continue;}
            if (r < 3 ) { r++ ; path +="D"; continue;}
        }
        cout << counter <<endl;
        cout << path <<endl;

    }
    return 0;

}
