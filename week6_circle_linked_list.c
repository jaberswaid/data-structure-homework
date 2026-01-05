#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;

void addEnd(int x){
    Node* n = malloc(sizeof(Node));
    n->data = x;
    if(!head){
        head = n; n->next = head; return;
    }
    Node* t = head;
    while(t->next != head) t = t->next;
    t->next = n; n->next = head;
}

void removeVal(int x){
    if(!head) return;
    Node *cur=head, *prev=NULL;
    do{
        if(cur->data == x){
            if(cur==head){
                Node* t=head;
                while(t->next!=head) t=t->next;
                if(t==head){ free(head); head=NULL; return; }
                t->next=head->next; head=head->next;
                free(cur); return;
            }
            prev->next = cur->next;
            free(cur); return;
        }
        prev=cur; cur=cur->next;
    }while(cur!=head);
}

void show(){
    if(!head){ printf("Empty\n"); return; }
    Node* t=head;
    do{ printf("%d ",t->data); t=t->next; }while(t!=head);
    printf("\n");
}

int main(){
    addEnd(1); addEnd(2); addEnd(3);
    show();
    removeVal(2);
    show();
    return 0;
}
