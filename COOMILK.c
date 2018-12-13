#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        char a[n][10];
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        int flag=0;
        if(n==1)
        {
            if(!strcmp(a[0],"COOKIE"))
               {
                 printf("NO\n");flag=1;
               }
        }
        else if(!strcmp(a[n-1],"COOKIE"))
        {
            printf("NO\n");
            flag=1;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(!strcmp(a[i],"COOKIE") && strcmp(a[i+1],"MILK"))
                {
                    printf("NO\n");
                    flag=1;
                }
            }
        }
        if(flag==0)
            printf("YES\n");
    }
    return 0;
}
