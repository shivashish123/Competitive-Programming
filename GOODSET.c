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
        int f=4;
        for(int i=0;i<n;i++)
        {
            if(i==0) a[i]=1;
            else if(i==1) a[i]=2;
            else
            {
             a[i]=f;f+=3;
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
