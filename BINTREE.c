#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        int c=0;
        while(x!=y)
        {
            if(x<y)
                y=y/2;
            else
                x=x/2;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
