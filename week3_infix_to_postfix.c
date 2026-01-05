
#include <stdio.h>
#include <ctype.h>

char st[50];
int top = -1;

int pri(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

int main() {
    char in[50], out[50];
    int i = 0, k = 0;

    scanf("%s", in);

    while (in[i]) {
        if (isalnum(in[i]))
            out[k++] = in[i];
        else {
            while (top != -1 && pri(st[top]) >= pri(in[i]))
                out[k++] = st[top--];
            st[++top] = in[i];
        }
        i++;
    }

    while (top != -1)
        out[k++] = st[top--];

    out[k] = '\0';
    printf("%s\n", out);
    return 0;
}
