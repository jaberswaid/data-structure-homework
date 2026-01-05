#include <stdio.h>

int main(){
    int a[50]={1,2,3,4}, n=4, i, pos=2, val=9;

    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=val; n++;

    for(i=pos;i<n-1;i++) a[i]=a[i+1];
    n--;

    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
