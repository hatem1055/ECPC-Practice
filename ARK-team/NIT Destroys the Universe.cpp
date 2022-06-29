// created : kareem sakkary
// link : https://codeforces.com/problemset/problem/1696/B
    #include <bits/stdc++.h>
    using namespace std;



    int main(){
        int t;
        cin >> t;
        while(t--){
            int n ;
            cin >> n;
            int a [n];
            bool zero = true;
            int c = 0;
            for(int i = 0 ; i < n ; i++){
                cin >> a[i];
                if(a[i]==0){
                    zero = true;
                }else{
                    if(zero)
                        c++;
                    zero = false;
                }
            }
            cout << min(c,2) << endl;


        }
        return  0;
    }