#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x,k;
        scanf("%d%d%d%d",&n,&m,&x,&k);
        char a[1000005];
        scanf("%s",a);
        if(n>k || x==0)
        {
            printf("no\n");
            continue;
        }
        int odd=0,even=0;
        for(int i=0;i<k;i++)
        {
            if(a[i]=='E')
                even++;
            else
                odd++;
        }
        for(int i=1;i<=m;i++)
        {
            if(i&1)
            {
                if(odd>x)
                    {n=n-x;
                    odd=odd-x;
                    }
                else if(odd>0)
                    n=n-odd;
            }
            else
            {
                if(even>x)
                    {n=n-x;
                    even=even-x;
                    }
                else if(even>0)
                    n=n-even;
            }
            if(n<=0)
                break;
        }
        if(n<=0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
