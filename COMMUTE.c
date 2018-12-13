#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int t=0;
        while(n--)
        {
            int x,l,f;
            scanf("%d%d%d",&x,&l,&f);
            if(x==t)
                t=t+l;
            else if(x>=t)
                {t=x;t+=l;
                }
            else
            {
                int z=(t+x)/f;
                if(z==0)
                  z=1;
                t=z*f+x;
                t+=l;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
