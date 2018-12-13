#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int g;
        char n[100];
        scanf("%d%s",&g,n);
        int lad=0;
        while(g--)
        {
        char a[100];
        int d;
        scanf("%s",a);
        if(!strcmp(a,"CONTEST_WON"))
           {
            scanf("%d",&d);
            lad+=300;
            if(d<=20)
                lad+=20-d;
           }
           else if(!strcmp("TOP_CONTRIBUTOR",a))
            lad+=300;
           else if(!strcmp("BUG_FOUND",a))
           {
               scanf("%d",&d);
               lad+=d;
           }
           else if(!strcmp("CONTEST_HOSTED",a))
            lad+=50;
            }
           int m;
           if(!strcmp(n,"INDIAN"))
            m=lad/200;
           else
            m=lad/400;
            printf("%d\n",m);
    }
    return 0;
}
