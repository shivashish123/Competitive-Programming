#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,u,d;
    scanf("%d%d%d",&n,&u,&d);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int j=1;
    int p=0;
    int fl=0;
    for(int i=1;i<n;i++)
    {
      fl=0;
        if(a[i]>a[i-1])
        {
            if((a[i]-a[i-1])<=u)
               { fl=1;
               j++;
               }
        }
        else if(a[i]==a[i-1])
        {
          fl=1;
            j++;
        }
        else if(a[i]<a[i-1])
        {
            if((a[i-1]-a[i])<=d)
                {j++;fl=1;}
            else if(p==0)
            {
                p=1;
                j++;
                fl=1;
            }
        }
        else if(fl==0)
            break;
    }
    printf("%d\n",j);
    }
    return 0;
}
