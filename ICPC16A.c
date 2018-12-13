#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int xd=c-a;
    int yd=d-b;
    if(xd==0)
    {
        if(yd>0)
            printf("up\n");
        else
            printf("down\n");
    }
    else if(yd==0)
    {
      if(xd>0)
            printf("right\n");
        else
            printf("left\n");
    }
    else
        printf("sad\n");

    }
    return 0;
}
