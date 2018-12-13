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
        int g=(n*(n+1))/2;
        int m,n;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i==0)
                m=a[i];
            else if(i==1)
                n=a[i];
            else
            {
                if(m>n)
                {
                    if(a[i]>m)
                    {m=a[i];n=m;}
                    else if(a[i]>n)
                    {
                        n=a[i];
                    }
                }
                else
                {
                  if(a[i]>n)
                    {n=a[i];m=n;}
                    else if(a[i]>m)
                    {
                        m=a[i];
                    }
                }
            }
        }
        int c1=0;c2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==n)
                c1++;
            else if(a[i]==m)c2++;
        }
        int l=c1*c2;
        float h=l/g;
        printf("%f\n",h);
    }
    return 0;
}
