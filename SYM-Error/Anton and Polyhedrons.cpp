#include<iostream>
using namespace std;
int main(){

    int n,i,sum=0;
    string s;
    int Icosahedron=20,Cube=6,Tetrahedron=4,Dodecahedron=12,Octahedron=8;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(s=="Icosahedron")
                sum=sum+20;
            else if(s=="Cube")
                sum=sum+6;
            if(s=="Tetrahedron")
                sum=sum+4;
            if(s=="Dodecahedron")
                sum=sum+12;
            if(s=="Octahedron")
                sum=sum+8;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
