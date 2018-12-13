#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100010];
        scanf("%s",a);
        long long int sum=0;
        long int y=strlen(a);
        long int c=0;
        for(int i=0;i<y-1;i++)
        {
            if(a[i]==a[i+1])
                c++;
           if((a[i]!=a[i+1])|| (i==(y-2)))
            {
               sum+=(c*(c+1))/2;
               c=0;
            }
        }
        for(int u=1;u<y-1;u++)
        {
            if(a[u]==a[u+1])
                c++;
            else if(a[u+1]==a[u-1-c])
            {
                sum++;
                c=0;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
