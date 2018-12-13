#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int e;
        scanf("%d%d",&n,&e);
        int pos=-1;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==e)
                pos=i;
        }
        if(pos>=0)
        {
            for(int i=0;i<n;i++)
            {
                if(i==pos)
                    printf("1 ");
                else
                    printf("0 ");
            }
            printf("\n");
            continue;
        }
        int o=-1,p=-1;
        float x;
        for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    x=((((e-a[j])*1.0))/(((a[i]-a[j])*1.0)));
                    if(x>0 && x<1)
                    {
                        o=i;p=j;
                        break;
                    }
                }
            }
        if(o==-1)
            printf("-1\n");
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==o)
                    printf("%0.8f ",x);
                else if(i==p)
                    printf("%0.8f ",(1-x));
                else
                    printf("0 ");
            }
            printf("\n");
        }

    }
    return 0;
}
