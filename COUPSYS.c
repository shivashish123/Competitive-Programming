#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m[3]={-1},c[3]={-1};
        int a,l,x;
        scanf("%d%d%d",&a,&l,&x);
        if(m[l-1]<x)
        {
            m[l-1]=x;
            c[l-1]=a;
        }
        else if(m[l-1]==x && a<c[l-1])
        {
            c[l-1]=a;
        }
        for(int i=0;i<3;i++)
            printf("%d %d\n",m[i],c[i]);
    }
    return 0;
}
