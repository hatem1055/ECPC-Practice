#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n, count = 0, zCount = 0;
   cin >> n;
   char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
   string word;
   cin >> word;
   if(n < 26){
       cout << "NO";
   } else {
       transform(word.begin(), word.end(), word.begin(), ::tolower);
       for (int i = 0; i < word.length(); ++i) {
           if(find(begin(arr), end(arr), word[i]) != end(arr)){
               remove(begin(arr), end(arr), word[i]);
               if(word[i] == 'z'){
                   zCount++;
               }
               if(word[i] == 'z' && zCount > 1){
                   count--;
               }
               count++;
               if(count == 26){
                   break;
               }
           }
       }
       if(count == 26){
           cout << "YES";
       } else {
           cout << "NO";
       }
   }
}
