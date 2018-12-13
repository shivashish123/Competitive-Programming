#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[1000];
        scanf("%s",a);
        int c0=0,c1=0;
        for(int h=0;h<strlen(a);h++)
        {
            if(a[h]=='1')
                c1++;
            else
                c0++;
        }
            if(c1>c0)
                printf("WIN\n");
            else
                printf("LOSE\n");
    }
    return 0;
}
