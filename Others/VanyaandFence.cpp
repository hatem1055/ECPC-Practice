#include<bits/stdc++.h>

int main() {
    int n, h, cnt = 0;
    scanf("%i%i", &n, &h);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
        if (arr[i] <= h) cnt++;
        else cnt += 2;
    }

    printf("%i", cnt);
}