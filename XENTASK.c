#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&b[i]);
        long int sum1=0,sum2=0;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {sum1+=a[j];sum2+=b[j];
            }
            else
            {sum1+=b[j];sum2+=a[j];}
        }
        if(sum1<sum2)
            printf("%ld\n",sum1);
        else
             printf("%ld\n",sum2);

    }
    return 0;
}
