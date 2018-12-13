#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    char a[100];
    scanf("%d%s",&n,a);
    char c[7][10]={"mon", "tues", "wed", "thurs", "fri", "sat","sun"};
    int pos;
    for(int i=0;i<7;i++)
    {
        if(!strcmp(a,c[i]))
        {
            pos=i;break;
        }
    }
    int h[7]={4};
    if(n==28)
     {for(int i=0;i<7;i++)
            printf("%d ",4);}
    else
    {
        int z=n%28;
        while(z--)
        {
            h[pos++]=5;
            if(pos>6)
                pos=0;
        }
        for(int y=0;y<7;y++)
            printf("%d ",h[y]);
    }
     printf("\n");

    }
    return 0;
}
