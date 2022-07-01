//code link:
using namespace std;
#include <iostream>
int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        if (c >= b) {
            cout << b << "\n" << c << "\n" << a << "\n";
            cout << endl;
            cout << a << "\n" << b << "\n" << c<< "\n";
        } else {
            cout << c << "\n" << b << "\n" << a << "\n";
            cout << endl;
            cout << a << "\n" << b << "\n" << c << "\n";
        }

    } else if (b >= a && b >= c) {
        if (a>=c) {
        cout << c << "\n" << a << "\n" << b << "\n";
        cout << endl;
        cout << a << "\n" << b << "\n" << c << "\n";
    }
        else{
            cout << a << "\n" << c << "\n" << b << "\n";
            cout << endl;
            cout << a << "\n" << b << "\n" << c << "\n";

        }
}
    else if(c>=a&&c>=b) {
        if (a>=b) {
            cout << b << "\n" << a << "\n" << c << "\n";
            cout << endl;
            cout << a << "\n" << b << "\n" << c << "\n";
        }
        else{
            cout << a << "\n" << b << "\n" << c << "\n";
            cout << endl;
            cout << a << "\n" << b << "\n" << c << "\n";
        }
    }



    return 0;
}

