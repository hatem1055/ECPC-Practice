    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
    
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            string s,t;
            cin>>s>>t;
            int a_counter=0;
            for(char j:t)
            {
                if(j=='a') a_counter++;
            }
            if(a_counter==1&&t.size()==1) cout<<"1\n";
            else if(a_counter==0) cout<<(long long int)pow(2,s.size())<<'\n';
            else if(a_counter >=1 && t.size()!=1) cout<<"-1\n";
        }
        return 0;
    }
