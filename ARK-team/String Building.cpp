    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while(t--) {
            string s;cin>>s;
            int suma=0;
            int sumb=0;
            bool flag=true;
            for(int i=0;i<s.size();){
                while(s[i]=='a'){
                    suma++;
                    sumb=0;
                    i++;
                }
                if(sumb==0&&suma!=0){
                    int counter=0;
                    for(int j=0;j<=suma;j++){
                        for(int k=0;k<=suma;k++){
                            if(j*2+k*3==suma) counter++;
                        }
                    }
                    if(counter==0) flag=false;
                }
                if(!flag){
                    cout<<"no\n";
                    break;
                }
                while(s[i]=='b'){
                    sumb++;
                    suma=0;
                    i++;
                }
                if(suma==0&&sumb!=0){
                    int counter=0;
                    for(int j=0;j<=sumb;j++){
                        for(int k=0;k<=sumb;k++){
                            if(j*2+k*3==sumb) counter++;
                        }
                    }
                    if(counter==0) flag=false;
                }
                if(!flag){
                    cout<<"no\n";
                    break;
                }
            }
            if(flag) cout<<"yes\n";
        }
    return 0;
    }
