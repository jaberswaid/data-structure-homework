#include <stdio.h>
int g[10][10], v[10]={0}, n;

void dfs(int s){
    v[s]=1; printf("%d ",s);
    for(int i=0;i<n;i++)
        if(g[s][i] && !v[i]) dfs(i);
}

void bfs(int s){
    int q[10], f=0,r=0;
    for(int i=0;i<n;i++) v[i]=0;
    q[r++]=s; v[s]=1;
    while(f<r){
        int x=q[f++]; printf("%d ",x);
        for(int i=0;i<n;i++)
            if(g[x][i] && !v[i]){
                q[r++]=i; v[i]=1;
            }
    }
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) scanf("%d",&g[i][j]);

    printf("DFS: "); dfs(0);
    printf("\nBFS: "); bfs(0);
    return 0;
}
