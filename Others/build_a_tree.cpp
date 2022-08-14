#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int first_num;
int second_num;

void solve(int num,int k){
    for(int i=0;i<k-1;i++){
        cout<<first_num<<" "<<second_num<<endl;
        first_num=second_num;
        second_num--;
    }
    cout<<first_num<<" "<<num<<endl;
    first_num=num;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(3);
        for(int i=0; i<3; i++){
            cin>>v[i];
        }
        vector<int> v_sorted=v;
        sort(v_sorted.begin(), v_sorted.end());
        first_num=1;
        second_num=n;
        int sum=accumulate(v.begin(),v.end(),0);
        if(v_sorted[0]+v_sorted[1]>=v_sorted[2] && sum/2<n && sum%2==0){
            cout<<"YES"<<endl;
            if(v[2]<v[0]){
                solve(3,v[2]);
                int step= (v[2]+v[0]-v[1])/2;
                if(step==0){
                    first_num=1;
                }
                else if(step<v[2]){
                    first_num=n+1-step;
                }
                solve(2,v[0]-step);
            }
            else{
                solve(2,v[0]);
                int step= (v[0]+v[2]-v[1])/2;
                if(step==0){
                    first_num=1;
                }
                else if(step<v[0]){
                    first_num=n+1-step;
                }
                solve(3,v[2]-step);
            }
            while(second_num>3){
                cout<<first_num<<" "<<second_num<<endl;
                first_num=second_num;
                second_num--;
            }
        }
        else cout<<"NO"<<endl;
    }
}