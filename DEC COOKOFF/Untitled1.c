#include<stdio.h>
int min(int a,int b)
{
  if(a<b)
  return a;
  else
  return b;
}
int max(int a,int b)
{
  if(b<a)
  return a;
  else
  return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b,c,d;
        int n;
        scanf("%d",&n);
        unsigned long int x;
        a=b=c=d=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lu",&x);
            if(x%4==0)
                a++;
            else if(x%4==1)
                b++;
            else if(x%4==2)
                c++;
            else
                d++;
        }
        long int sum;
        int fl=0;
        if(c%2==0 && b==d)
        {sum=b+c/2;fl=1;}
        else if(c%2==1 && b!=d )
            { int k=min(b,d);
              int u=max(b,d);
               if(b%4==1 && d%4==3)
                   {
                       sum=((u-k)/4)*3+k+c/2+2;fl=1;
                   }
                   else if(b%4==3 && d%4==1)
                   {
                       sum=((u-k)/4)*3+k+c/2+2;fl=1;
                   }
                    else if(b%4==2 && d%4==0)
                    {
                        sum=((u-k)/4)*3+k+c/2+2;fl=1;
                    }
                    else if(b%4==0 && d%4==2)
                    {
                        sum=((u-k)/4)*3+k+c/2+2;fl=1;
                    }

            }
        else if(c%2==0 && b!=d)
        {
              int k=min(b,d);
              int u=max(b,d);
            if(b%4==d%4)
            {sum=c/2+((u-k)/4)*3+k;
                fl=1;
            }
        }
        if(fl==1)
        printf("%ld\n",sum);
        else
            printf("-1\n");
    }
    return 0;
}
