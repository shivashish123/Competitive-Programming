#include<stdio.h>
int main()
{
    int n,m;
    long int c;
    scanf("%d%d%ld",&n,&m,&c);
    long int b[n+1];
    for(int i=0;i<n+1;i++)
        b[i]=0;
    while(m--)
    {
        char h[6];
        scanf("%s",h);
        if(*h=='Q')
        {
            int v;
            scanf("%d",&v);
            long int sum=0;
            for(int i=0;i<v;i++)
                sum+=b[i];
            printf("%ld\n",(sum+c));
        }
        else
        {
            int u,v;
            long int k;
            scanf("%d%d%ld",&u,&v,&k);
            b[u-1]+=k;
            b[v]-=k;
        }
    }
    return 0;
}
