#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[150];
        scanf("%s",a);
        int flag=0;
        for(int i=0;i<strlen(a);i++)
        {
            for(int j=i+1;j<strlen(a);j++)
            {
                if(a[i]==a[j])
                {
                    flag=1;break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
