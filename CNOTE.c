#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,k,n;
        scanf("%d%d%d%d",&x,&y,&k,&n);
        int l=x-y;
        int fl=0;
        while(n--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if(a>=l)
            {
                if(b<=k)
                    fl=1;
            }
        }
        if(fl==0)
            printf("UnluckyChef\n");
        else
           printf("LuckyChef\n");
    }
    return 0;
}
