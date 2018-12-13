#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c;
        scanf("%d%d",&n,&c);
        if(c>(n/2))
            printf("-1\n");
        else
        {
            int count=0;
            int i=2;
            while(count<c)
            {
                printf("%d ",i);
                i=i+2;
                count++;
            }
            printf("\n");
        }
    }
    return 0;
}
