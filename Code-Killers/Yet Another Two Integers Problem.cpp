#include<iostream>
using namespace std;
int main()

{

    int t, a,b;
    cin>>t;

    while(t--)

    {

        cin>>a>>b;

        if(a==b)

            cout<<"0"<<endl;

        else

        {

            if(abs(a-b)%10==0)

                cout<<abs(a-b)/10<<endl;

            else

                cout<<(abs(a-b)/10)+1<<endl;

        }

    }

}

















/*#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t, k = 0;
    long long a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        if (a == b)
            k = 0;
        else {
            while (a != b) {
                if (a > b) {
                    if (a - b >= 10) {
                        a -= 10;
                        k++;
                    } else if (a - b < 10) {
                        a -= (a - b);
                        k++;
                    }

                } else {
                    if (a < b) {
                        if (a + 10 <= b) {
                            a += 10;
                            k++;
                        } else if (a + 10 > b) {
                            a += (b - a);
                            k++;
                        }

                    }

                }

            }
        }
        cout<<k<<endl;
        k=0;


    }
}*/


