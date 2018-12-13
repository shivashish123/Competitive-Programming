#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    int fl=0;
    int pos;
    for(int h=0;h<n;h++)
    {
        if(h==0)
            b[h]=a[h];
        else
            b[h]=b[h-1]^a[h];
    }
    while(q--)
    {
        int t,i,x;
        scanf("%d%d%d",&t,&i,&x);
        if(t==1)
        {
            a[i-1]=x;fl=1;pos=i-1;
        }
        else
        {
            if(fl==0)
            {
                int count=0;
            for(int y=0;y<i;y++)
            {
                if(b[y]==x)
                    count++;
            }
            printf("%d\n",count);
            }
            else
            {
                for(int h=pos;h<n;h++)
                    b[h]=b[h-1]^a[h];
                 int count=0;
                for(int g=0;g<i;g++)
                {
                    if(b[g]==x)
                        count++;
                }
                 printf("%d\n",count);
            }
        }
    }
    return 0;
}
