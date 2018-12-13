#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[1000000];
        scanf("%s",a);
        char x=a[0];
        char y=a[1];
        if(x==y)
        {printf("NO\n");continue;}
        int flag=0;
        for(int i=0;i<strlen(a);i+=2)
        {
            if(a[i]!=x)
            {
                flag=1;break;
            }
        }
        if(flag==0)
        {
          for(int i=1;i<strlen(a);i+=2)
            {
            if(a[i]!=y)
            {
                flag=1;break;
            }
            }
        }
         if(flag==0)
            printf("YES\n");
         else
            printf("NO\n");
        }


    return 0;
}
