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
        {scanf("%d",&a[j]);
        if(j==0)
            min=a[j];
        else if(min>a[j])
            min=a[j];
        }
        long int h=min*(n-1);
        printf("%ld\n",h);
    }
    return 0;
}
