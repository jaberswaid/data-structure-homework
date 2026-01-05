
#include <stdio.h>
int t[20], n;

void preorder(int i){
    if(i>=n) return;
    printf("%d ",t[i]);
    preorder(2*i+1); preorder(2*i+2);
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&t[i]);
    preorder(0);
    return 0;
}
