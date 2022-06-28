using namespace std ;
int main(){
    string str;
    cin >> str ;
    int count = str.size();
    for(int i = 0 ; i < str.size()-1; i++){
        for(int j = i + 1 ; j < str.size() ; j++){
            if (str[i] == str[j]){
                count--;
                break;
            }
        }
    }
    cout << count << endl ;
    if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}
