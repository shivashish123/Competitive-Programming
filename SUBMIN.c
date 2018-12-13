#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int x;
        scanf("%d",&x);
        int c=0;
        int fl=0;
        for(int i=0;i<n;i++)
        {
            fl=0;
            if(a[i]>=x)
            {
              int j=i;
              int min=a[j];
              while(j<n)
              {
                if(a[j]<x)
                    break;
                if(a[j]<min)
                    min=a[j];
                if(min==x)
                  c++;
                j++;
              }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
