// div 4 # 806
// Mahmoud Adel

#include<iostream>

void solve() {
    std::string str;
    std::cin >> str;
    if ((str[0] == 'Y' || str[0] == 'y') && (str[1] == 'E' || str[1] == 'e') && (str[2] == 'S' || str[2] == 's'))
        printf("YES\n");
    else printf("No\n");
}


int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}