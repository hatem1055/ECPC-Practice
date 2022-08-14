
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int x,int y){
   int max = (x > y) ? x : y;

    do
    {
        if (max % x == 0 && max % y == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);
}





int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    vector<int>ans;
    while(t--) {
        int n; cin >> n;
        int x1, x2, y1, y2;
        x1 = x2 = y1 = y2 = 0;
        for (int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            x1 = max(x1, x);y1 = max(y1, y);
            x2 = min(x2, x);y2 = min(y2, y);
        }
        cout << 2*(x1 - x2 + y1 - y2) << endl;
        /*int n,moves=0;
        int x=0,y=0;
        cin>>n;
        while(n--){
           int x1,y1;
           cin>>x1>>y1;
           moves+=abs(x1-x);
           moves+=abs(y1-y);
           x = x1;
           y = y1;
        }
        moves+=abs(0-x);
        moves+=abs(0-y);
        cout<<moves<<endl;*/
    }





}
