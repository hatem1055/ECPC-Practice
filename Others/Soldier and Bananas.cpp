// div 2 # 304

#include<iostream>

int main() {
    int k, w, n, cnt = 0;
    scanf("%i%i%i", &k, &n, &w);
    for (int i{ 0 }; i < w; i++) {
        cnt += (i + 1) * k;
    }

    if (cnt - n < 0) printf("%i", 0);
    else printf("%i", cnt - n);
}