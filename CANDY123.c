#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test)
    while(test--)
    {
        int a,b;
        scand("%d%d",&a,&b);
        int flag1=0,flag2=0;
        int h=1;
        while(a>=0 && b>=0)
        {
            a=a-h;
            if(a<0)
                flag1=1;
            else
            {h++;
            b=b-h;
            h++;
            if(b<0)
                flag2=1;
            }
        }
        if(flag1==1)
            printf("Bob\n");
        else if(flag2==1)
            printf("Limak\n");
    }
    return 0;
}
