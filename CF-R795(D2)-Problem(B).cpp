#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t{0},n{0};
    cin>>t;
    while (t--){
        cin>>n;
        vector<int>s(n);
        int temp = -1;
        int counter = 0;
        bool error = false;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(temp==-1){
                temp = s[i];
                counter++;
            }else{
                if(s[i]!=temp){
                    if(counter<2){
                        error = true;
                    }else{
                        temp = s[i];
                        counter = 1;
                    }
                }else{
                    counter++;
                }
            }
        }
        if(n<2 || counter < 2){
            error = true;
        }
        if(error){
            cout<<-1<<endl;
        }else{
            vector<int>order;
            for(int i=1;i<=n;i++){
                order.push_back(i);
            }
            int lp = 0;
            int rp = 1;
            while (rp<n){
                if(s[lp]==s[rp]){
                    swap(order[lp],order[rp]);
                    lp++;
                    rp++;
                }else{
                    lp++;
                    rp++;
                }
            }
            for(int num : order){
                cout<<num<<" ";
            }
            cout<<endl;
        }


    }
    return 0;
}
