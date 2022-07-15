#include <iostream>

using namespace std;

int main(){
    int numOfProblems, person1, person2, person3, sum, count = 0;
    cin >> numOfProblems;
    for (int i = 0; i < numOfProblems; i++){
        cin >> person1 >> person2 >> person3;
        sum = person1 + person2 + person3;
        if (sum >= 2){
            count++;
        }
    }
    cout << count;
}