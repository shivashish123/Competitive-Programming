#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int a,n;
        scanf("%llu%llu",&a,&n);
        unsigned long long int x=a;
        int sum=0;
        while(x>0)
        {
            sum+=(x%10);
            x=x/10;
        }
        while(sum>=10)
        {
        int s=0;
        while(sum>0)
        {
            s+=(sum%10);
            sum=sum/10;
        }
        sum=s;
        }
        if(sum==1)
        {
          printf("1\n");
        }
        else if(sum==2)
        {
          int j[6]={2,4,8,7,5,1};
          int l=n%6;
          printf("%d\n",j[l]);
        }
        else if(sum==3)
        {
          if(n==1)
            printf("3\n");
          else
            printf("9\n");
        }
        else if(sum==4)
        {
          int j[3]={4,7,1};
          int l=n%3;
          printf("%d\n",j[l]);
        }
        else if(sum==5)
        {
          int j[6]={5,7,8,4,2,1};
          int l=n%6;
          printf("%d\n",j[l]);
        }
        else if(sum==6)
        {
          if(n==1)
            printf("6\n");
          else
            printf("9\n");
        }
    }
    return 0;
}

