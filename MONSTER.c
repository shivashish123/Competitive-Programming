#include<stdio.h>
int main()
{
    long int n,m;
    scanf("%ld",&n);
    long int a[n];
    int check[n];
    for(int i=0;i<n;i++)
        {scanf("%ld",&a[n]);
        check[i]=1;
        }
    int count=n;
    scanf("%ld",&m);
    while(m--)
    {
       long int x,y;
       scanf("%ld%ld",&x,&y);
       for(int i=0;i<n;i++)
       {
           if(check[i] && (x==i||i==0))
           {
               a[i]=a[i]-y;
               if(a[i]<=0)
               {count--;
               check[i]=0;
               }
           }
       }
       printf("%d\n",count);
    }
        return 0;
}
