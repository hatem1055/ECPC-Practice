#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define MOD 1000000007

using namespace std;
void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l;
    vector<char>ans;
    cin>>l;
    while(l--){
        int r,c,count=0;
        cin>>r>>c;
        if(r>=8){
            if(c==6){
                c--;
                ans.push_back('L');
                count++;
            }
            else if(c==7){
                c++;
                ans.push_back('R');
                count++;
            }
        }
        if(r>=11){
            if(c==2){
                c--;
                ans.push_back('L');
                count++;
            }
            else if(c==3){
                c++;
                ans.push_back('R');
                count++;
            }
            else if(c==10){
                c--;
                ans.push_back('L');
                count++;
            }
            else if(c==11){
                c++;
                ans.push_back('R');
                count++;
            }
        }
        if(r>3){
            while(r>3){
                r--;
                count++;
                ans.push_back('U');
            }
        }
        else if(r<3){
            while (r<3){
                r++;
                count++;
                ans.push_back('D');
            }
        }
        if(c>3){
            while(c>3){
            c--;
            ans.push_back('L');
            count++;}
        }
        else if(c<3){
            while(c<3){
            c++;
            ans.push_back('R');
            count++;}
        }
        cout<<count<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i];
        cout<<endl;
        ans.clear();
    }

}

























       /* if(check_index(r,c)==true){
                if(r>3){
                    while(r>3){
                        if(check_index((r-1),c)){
                        r--;
                        count++;
                        ans.push_back('U');}
                        else{
                           while(check_index(r,c)==false){
                               if(check_index(r,(c+1))){
                                   c++;
                                   count++;
                                   ans.push_back('R');
                               }
                           else{
                               if(check_index(r,(c-1))){
                                   c--;
                                   count++;
                                   ans.push_back('L');
                               }
                           }
                           }
                        }

                        }
                    }
                    if(c>3){
                        while(c>3){
                            if(check_index(r,(c-1))){
                            c--;
                            count++;
                            ans.push_back('L');}
                        }
                    }
                    else if(c<3){
                        while(c<3){
                            if(check_index(r,(c+1))){
                            c++;
                            count++;
                            ans.push_back('R');}
                        }
                    }}
            else if(r<3){
                while(r<3){
                    if(check_index((r+1),c)){
                    r++;
                    count++;
                    ans.push_back('D');}
                    else{
                        while(check_index(r,c)==false){
                            if(check_index(r,(c+1))){
                                c++;
                                count++;
                                ans.push_back('R');
                            }
                            else{
                                if(check_index(r,(c-1))){
                                    c--;
                                    count++;
                                    ans.push_back('L');
                                }
                            }
                        }
                    }
                }
                if(c>3){
                    while(c>3){
                        if(check_index(r,(c-1))){
                        c--;
                        count++;
                        ans.push_back('L');}
                    }
                }
                else if(c<3){
                    while(c<3){
                        if(check_index(r,(c+1))){
                        c++;
                        count++;
                        ans.push_back('R');}
                    }
                }

        }
        cout<<count<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        ans.clear();


    }*/













