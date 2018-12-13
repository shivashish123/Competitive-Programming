#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        long int min=a[n-1];
        for(int h=n-2;h>=0;h--)
        {
            min++;
            if(a[h]>min)
                min=a[h];
        }
        printf("%ld\n",min);
    }
    return 0;
}
