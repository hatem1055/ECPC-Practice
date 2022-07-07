#include <iostream>
using namespace std;
void restore(){
    int n;
    cin>>n;
    while(n--){
        int b[7];
        for(int i=0;i<7;i++)
            cin>>b[i];

        cout<<b[0]<<" "<<b[1]<<" "<<b[6]-b[0]-b[1]<<"\n";

    }
}

int main()
{
    restore();
}

