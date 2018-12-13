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
        int count[100001]={0};
        int max;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            count[a[i]]++;
            if(i==0)
                max=a[i];
            else if(max<a[i])
                max=a[i];
        }
        for(int i=max;i>=0;i--)
        {
            if(count[a[i]]%2==1)
            {
              printf("%d\n",a[i]);
              break;
            }
        }
    }
    return 0;
}
