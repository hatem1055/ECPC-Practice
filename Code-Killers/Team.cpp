#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
void files() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,count,c=0;
    cin>>n;
    while(n--){
        count=0;
       int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
            if(arr[i]==1)
                count++;
        }
        if(count>=2)
            c++;


    }
    cout<<c;

}






