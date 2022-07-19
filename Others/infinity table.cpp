#include <iostream>
using  namespace  std;
void  solve(){
    int k;
    cin >> k;
    int count=1,i=0;
    while(count <= k){
        i++;
        count = i*i;
        if(count==k) {
            i--;
            break;
        }else if(count>k){
            i--;
            break;
        }
    }
    count = i*i;
    int r=1,c=i+1;
    for(int j=count+1; j<=(i+1)*(i+1); j++){
        if(j==k){
            cout << r << " " << c << "\n";
            break;
        }else{
            if(r>=i+1) c--;
            if(r<i+1) r++;
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}