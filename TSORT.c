#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[1000001]={0};
    int max;
    for(int i=0;i<n;i++)
        {scanf("%d",&a[i]);
            b[a[i]]++;
            if(i==0)
             max=a[i];
             else if(max<a[i])
                    max=a[i];
        }
    for(int i=0;i<=max;i++)
    {
        if(b[i]>0)
        {
            for(int j=1;j<=b[i];j++)
                printf("%d\n",i);
        }
    }
    return 0;
}
