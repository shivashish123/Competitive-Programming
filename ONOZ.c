#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,m;
        scanf("%d%d",&h,&m);
        int count=1;
        for(int i=1;i<=9;i++)
        {
            int c=i;
            int d=i;
            while(d<h)
            {
                while(c<m)
                {
                    count++;
                    c=c*10+i;
                }
                c=i;
                d=d*10+i;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
