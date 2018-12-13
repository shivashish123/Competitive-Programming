#include<stdio.h>
int main()
{
    while(1)
    {
        int b[100007];
        int x;
        scanf("%d",&x);
        if(x==0) break;
        else
        {
            int a[x];
            for(int u=0;u<x;u++)
            {
                scanf("%d",&a[u]);
                b[a[u]-1]=u+1;
            }
            int flag=0;
            for(int f=0;f<x;f++)
            {
              if(a[f]!=b[f])
              {flag=1;break;}
            }
            if(flag==0)
                printf("ambiguous\n");
            else
                printf("not ambiguous\n");
        }
    }
    return 0;
}
