#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        int l=0;
        int temp;
        long int sum1=0;
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           if(a[i]<0)
                l++;
            sum1+=a[i];
            if(i==0)
                temp=a[i];
            else if(a[i]>temp)
                temp=a[i];

        }
        if(l==0)
        {
            printf("%ld\n",(sum1*k));
            continue;
        }
        if(l==n || l==n-1)
            {printf("%d\n",temp);continue;}
        long int sum=a[0];
        long int m=a[0];
        for(int i=1;i<n;i++)
        {
            sum+=a[i];
            if(sum>m )
                m=sum;
            if(sum<0)
                sum=0;
        }
        if(k==1)
        {
          printf("%ld\n",m);
          continue;
        }
        long int r=a[n-1];
        sum=a[n-1];
        for(int j=0;j<n-1;j++)
        {
            sum+=a[j];
            if(sum>r)
                r=sum;
            if(sum<0)
                sum=0;
        }
        if(sum1>0)
        {long int fake=a[0];
            long int check=a[0];
            long int sum2,sum3;
            for(int i=1;i<n;i++)
            {
                fake+=a[i];
                if(fake>check)
                    check=fake;
            }
            sum2=(sum1*(k-1))+check;
            fake=a[n-1];
            check=a[n-1];
            for(int i=n-2;i>=0;i--)
            {
              fake+=a[i];
              if(fake>check)
                check=fake;
            }
            sum3=(sum1*(k-1))+check;
            long int sum4=sum2+sum3-2*(sum1*(k-1))+sum1*(k-2);
            if(sum2>sum3 && sum2>sum4)
              sum1=sum2;
            else if(sum3>sum4)
              sum1=sum3;
            else
              sum1=sum4;
        }
        if(sum1>m && sum1>r)
            printf("%ld\n",sum1);
        else if(m>r)
            printf("%ld\n",m);
        else
            printf("%ld\n",r);
    }
    return 0;
}
