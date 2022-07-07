// div 2 # 143
// Mahmoud Adel

#include<bits/stdc++.h>

int main() {
    int t, slv = 0; scanf("%i", &t);
    while (t--) {
        int arr[3], cnt = 0;
        for (int i = 0; i < 3; i++) {
            scanf("%i", &arr[i]);
            if (arr[i] == 1) cnt++;
        }
        if (cnt > 1) slv++;
    }
    printf("%i\n", slv);
}