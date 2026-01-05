#include <stdio.h>

void move(int n, char s, char d, char a) {
    if (n == 0) return;

    move(n-1, s, a, d);
    printf("Disk %d: %c -> %c\n", n, s, d);
    move(n-1, a, d, s);
}

int main() {
    int n;
    scanf("%d", &n);
    move(n, 'S', 'D', 'A');
    return 0;
}
