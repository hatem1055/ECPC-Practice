#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, w = 0;
    cin >> n;
    vector<int> arr;
    vector<int> teams;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    bool check = true;
    while(check){
        vector<int> team;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                team.push_back(i+1);
                arr[i] = 0;
                break;
            }
            if(i == arr.size()-1){
                check = false;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == 2){
                team.push_back(i+1);
                arr[i] = 0;
                break;
            }
            if(i == arr.size()-1){
                check = false;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == 3){
                team.push_back(i+1);
                arr[i] = 0;
                break;
            }
            if(i == arr.size()-1){
                check = false;
            }
        }
        if(team.size() == 3){
            w++;
            for(int i = 0; i < 3; i++){
                teams.push_back(team[i]);
            }
        }
    }
    cout << w << endl;
    for(int i = 0; i < w*3; i++){
        cout << teams[i];
        if((i+1) % 3 == 0){
            cout << endl;
        }
        else{
            cout << ' ';
        }
    }
    return 0;
}