#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        int fl=0;
        for(int i=0;i<n;i++)
                scanf("%ld",&a[i]);
        for(int i=0;i<n-2;i++)
        {
            if((a[i]>a[i+2])&&(a[i+1]>a[i+2]))
            {fl=1;break;}
        }
        if(fl==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
