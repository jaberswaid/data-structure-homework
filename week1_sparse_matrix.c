#include <stdio.h>

int main() {
    int r, c;
    int mat[50][50];
    int i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    int count = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (mat[i][j] != 0)
                count++;

    printf("%d %d %d\n", r, c, count);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (mat[i][j] != 0)
                printf("%d %d %d\n", i, j, mat[i][j]);

    return 0;
}
