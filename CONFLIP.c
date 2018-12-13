#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g;
        scanf("%d",&g);
        while(g--)
        {
            long int i,n,r;
            scanf("%ld%ld%ld",&i,&n,&r);
            if(n%2==1)
            {
            if(i==r)
                printf("%ld\n",n/2);
            else
                printf("%ld\n",((n/2)+1));
            }
            else
              printf("%ld\n",n/2);
        }
    }
    return 0;
}
