#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int x,y;
        scanf("%ld%ld",&x,&y);
        if(x<0)
            x=-x;
        if(y<0)
            y=-y;
        printf("%ld\n",(x+y));
    }
    return 0;
}
