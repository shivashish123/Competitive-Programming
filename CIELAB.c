#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int g;
    scanf("%d%d",&a,&b);
    g=a-b;
    char buf[25];
    sprintf(buf,"%d",g);
    int x=strlen(g)-1;
    if(g[x]>='0' && g[x]<='8')
        g[x]=g[x]+1;
    else
        g[x]=g[x]-1;
    int val;
    val=atoi(g);
    printf("%d",val);
    return 0;
}
