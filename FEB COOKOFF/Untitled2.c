#include<stdio.h>
#include<math.h>
long int cmp(const void *a,const void *b)
{
    return (*(long int*)a-*(long int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long int a[3];
        scanf("%ld%ld%ld",&a[0],&a[1],&a[2]);
        qsort(a,3,sizeof(long int),cmp);
        long int sum=0;
        long int sq2=sqrt(n);
        for(int i=1;(i<=sq2 && i<=a[0]);i++)
        {
            if((n%i)==0)
            {
                long int p=n/i;
                int sq=sqrt(p);
                for(int j=1;j<=sq && j<=a[1];j++)
                {
                    if((p%j)==0)
                    {
                        int x=p/j;
                        if(x<=a[1])
                        {
                            if(x==j)
                                sum++;
                            else
                                sum+=2;
                        }
                        else if(x<=a[2] )
                        {
                          sum++;
                        }
                    }
                    }
                    int sq3=sqrt(i);
                    for(int j=1;j<=sq3 && j<=a[1];j++)
                    {
                    if((i%j)==0)
                    {
                         x=i/j;
                        if(x<=a[1])
                        {
                            if(x==j)
                                sum++;
                            else
                                sum+=2;
                        }
                        else if(x<=a[2] )
                        {
                          sum++;
                        }
                    }
                    }
            }
            }
        printf("%ld\n",sum);
    }
    return 0;
}
