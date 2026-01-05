#include <stdio.h>
int g[10][10], v[10]={0}, n;

void dfs(int i){
    v[i]=1; printf("%d ",i);
    for(int j=0;j<n;j++)
        if(g[i][j] && !v[j]) dfs(j);
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) scanf("%d",&g[i][j]);

    for(int i=0;i<n;i++)
        if(!v[i]){
            printf("Cluster: ");
            dfs(i); printf("\n");
        }
    return 0;
}
