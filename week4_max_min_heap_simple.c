
#include <stdio.h>

int h[50], n = 0;

void insert(int x) {
    int i = n++;
    h[i] = x;
    while (i > 0 && h[(i-1)/2] < h[i]) {
        int t = h[i];
        h[i] = h[(i-1)/2];
        h[(i-1)/2] = t;
        i = (i-1)/2;
    }
}

int main() {
    int x;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        insert(x);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", h[i]);

    return 0;
}
