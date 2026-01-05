#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *l, *r;
};

struct node* head = NULL;

void add(int x) {
    struct node* n = malloc(sizeof(struct node));
    n->data = x;
    n->l = NULL;
    n->r = head;
    if (head) head->l = n;
    head = n;
}

void show() {
    struct node* t = head;
    while (t) {
        printf("%d ", t->data);
        t = t->r;
    }
}

int main() {
    add(3); add(6); add(9);
    show();
    return 0;
}
