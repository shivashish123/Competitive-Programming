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
        int c1=0,c0=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='1')
                c1++;
            else
                c2++;
        }
        if(c1==1 || c2==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
