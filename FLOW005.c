#include<stdio.h>
int main()
{
    int a[6]={100,50,10,5,2,1}
    int test;
    scanf("%d",&test);
    int i,j;
    for(j=0;j<test;j++)
    {
        int count=0;
        int n;
        scanf("%d",&n);
        for(i=0;i<7;i++)
        {
            int o=n/a[i];
            n=n-o*a[i]
            count+=o;
            if(n==0)
                break;
       }
       printf("%d\n",count);
    }
    return 0;
}
