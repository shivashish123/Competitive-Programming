#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==i+1)
                flag=1;
            b[i]=0;
        }
        int s=0;
        if(flag==1)
        {
            printf("no\n");
            s=1;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            b[a[i]-1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]!=1)
            {
                printf("no\n");
                break;
                s=1;
            }
        }
        if(s==0)
        printf("yes\n");
    }
    return 0;
}
