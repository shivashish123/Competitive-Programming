#include<stdio.h>
int main()
{
    long int n,k;
    scanf("%ld%ld",&n,&k);
    long int a[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    long int min=abs(a[0]+a[1]-k);
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]+a[j]-k)==min)
                count++;
            else if(min>(abs(a[i]+a[j]-k)))
            {
                min=abs(a[i]+a[j]-k);
                count=1;
            }
        }
    }
    printf("%ld %d\n",min,count);
    return 0;
}
