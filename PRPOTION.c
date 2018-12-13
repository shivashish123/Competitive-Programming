#include<stdio.h>
int position(long int a[])
{
    if(a[0]>a[1] && a[0]>a[2])
        return 0;
    if(a[1]>a[2])
        return 1;
    return 2;
}
int main()
{
    int t,r,g,b,m;
    scanf("%d",&t);
    while(t--)
    {scanf("%d%d%d%d",&r,&g,&b,&m);
    long int R[r],G[g],B[b];
    long int max[3];
    for(int i=0;i<r;i++)
        {scanf("%ld",&R[i]);
        if(i==0)
            max[0]=R[i];
        else if(R[i]>max[0])
            max[0]=R[i];
        }
    for(int i=0;i<g;i++)
        {
            scanf("%ld",&G[i]);
            if(i==0)
            max[1]=G[i];
            else if(G[i]>max[1])
            max[1]=G[i];
        }
    for(int i=0;i<b;i++)
        {
            scanf("%ld",&B[i]);
            if(i==0)
            max[2]=B[i];
            else if(B[i]>max[2])
            max[2]=B[i];
        }
    long int fina;
    for(int i=0;i<m;i++)
    {
        int pos=position(max);
        max[pos]=(max[pos]/2);
        if(i==(m-1))
        {
            pos=position(max);
            fina=max[pos];
        }
    }
    printf("%ld\n",fina);
    }
        return 0;
}
