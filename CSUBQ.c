#include<stdio.h>
int main()
{

    long int n,q,l,r;
    scanf("%ld%ld%ld%ld",&n,&q,&l,&r);
    long int a[n];
    for(long int ins=0;ins<n;ins++)
    {
        a[ins]=0;
    }
    while(q--)
    {
        long int f,x,y;
        scanf("%ld%ld%ld",&f,&x,&y);
           if(f==1)
               a[x-1]=y;
           else
           {
               long int sub;
               long int sum=0;
               for(long int t=x-1;t<y;t++)
               {
                   sub=0;
                   if(a[t]>=l && a[t]<=r)
                   {
                       sub++;
                       long int max1=a[t];
                       for(long int jh=t+1;jh<y;jh++)
                       {
                           if(a[jh]<=max1)
                           {
                            sub++;
                           }
                           else if(a[jh]>=l && a[jh]<=r)
                           {
                             max1=a[jh];
                             sub++;
                           }
                           else
                            break;
                       }
                   }
                   sum+=sub;
               }
               printf("%ld\n",sum);
                }

    }
    return 0;
}
