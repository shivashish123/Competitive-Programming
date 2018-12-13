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
        float g=(n*(n-1))/2
        int count[100000]={0};
        int max;
        int l;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i])
            count[a[i]]++;
            if(i==0)
                max=a[i];
            else if(max<a[i])
                max=a[i];
        }
        if(count[max]>=2)
        {
            l=(count[max]*(count[max]-1))/2;
        }
        int flag=0;
        else
        {
        int h;
        for(int j=max-1;j>=0;j--)
        {
            if(count[j]>0)
            {
              h=count[j];
              break;flag=1;
            }
        }
        }
        if(flag==0)
        float x=l/g;
        else
            float x=h/g;
        printf("%f\n",x);
    }
    return 0;
}
