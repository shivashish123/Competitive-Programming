#include<stdio.h>
int main()
{
    long int n,k;
    scanf("%ld%ld",&n,&k);
    long int a[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    if(k==0)
    {
        for(int i=0;i<n;i++)
            printf("%ld ",a[i]);
        return 0;
    }
    long int max=a[0];
        for(int h=1;h<n;h++)
            if(a[h]>max)
                max=a[h];
     if(k%2==1)
    {
        for(int j=0;j<n;j++)
            printf("%ld ",max-a[j]);
       return 0;
    }
    for(int j=0;j<n;j++)
        a[j]=max-a[j];
     max=a[0];
        for(int h=1;h<n;h++)
            if(a[h]>max)
                max=a[h];
    if(k%2==0)
    {
        for(int j=0;j<n;j++)
            printf("%ld ",max-a[j]);
       return 0;
    }
}
