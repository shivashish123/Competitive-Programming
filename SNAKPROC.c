#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int i=0;
        int f=0;
        while(i<strlen(a))
        {
            if(a[i]=='H')
            {
                int j;
                for(j=i+1;;j++)
                {
                    if(a[j]=='H')
                    {
                        f=1;break;
                    }
                    else if(a[j]=='T')
                    {
                        i=j+1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
    return 0;
}
