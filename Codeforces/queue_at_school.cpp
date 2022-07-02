#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t ;
    cin >> t;
    string queue;
    char new_queue [n];
    cin>>queue;
    int size = queue.size(); 
    for(int i = 0;i < t;i++){
        for(int j = 0;j < n;j++){
            new_queue[j] = queue[j];
        }
        for(int c = 0;c < queue.size() - 1;c++){
            char first = queue[c];
            char second = queue[c + 1];
            // cout << first << ',' << second << endl;
            if(first == 'B' && second == 'G'){
                first = 'G';
                second = 'B';
                new_queue[c] = first;
                new_queue[c + 1] = second;
            }   
        }
        for(int j = 0;j < n;j++){
            queue[j] = new_queue[j];
        }

    }
    cout << queue;
    return 0;
}
