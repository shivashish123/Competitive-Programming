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
        for(int h=0;h<n;h++)
        {
            scanf("%d",&a[h]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    a[i]=0;
            }
        }
        int count=0;
        for(int h=0;h<n;h++)
        {
            if(a[i]!=0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
