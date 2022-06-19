#include <iostream>
#include <regex>
#include <functional>
using namespace std;
int main () {
    smatch myMatch{};
    string test{};
    cin>>test;
    bool h{false};
    bool l{false};
    int lCount{0};
    bool e{false};
    bool o{false};
    for(int i=0;i<test.size();i++){
        if(test[i]=='h'){
            if(!h){
                h = true;
            }
        }else if(test[i]=='e'){
            if(h){
                if(!e){
                    e = true;
                }
            }
        }else if(test[i]=='l'){
            if(h){
                if(e){
                    if(!l){
                        l = true;
                        lCount++;
                    }else{
                        lCount++;
                    }
                }
            }
        }else if(test[i]=='o'){
            if(h){
                if(e){
                    if(l && lCount>=2){
                        if(!o){
                            o= true;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(h&&e&&l&&o){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;

}
