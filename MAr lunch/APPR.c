#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[1000005];
        long long int sum=0;
        for(int i=0;i<n;i++)
            {scanf("%ld",&a[i]);
            sum+=a[i];
            }
        for(int i=1;i<=n;i++)
        {
            if(i==1)
                printf("1");
            else if((sum%i)!=0)
            {
                printf("0");
            }

            else
            {

                long long int h=sum/i;
                long long int sum1=0;
                int part=0;
                int fl=0;
                for(int j=0;j<n;j++)
                {
                    if(sum1<h)
                        sum1+=a[j];
                    if(sum1==h)
                    {
                        part++;
                        sum1=0;
                    }
                    if(sum1>h)
                    {
                    fl=1;break;
                    }
                }

                if(fl==1)
                {
                printf("0");continue;
                }
                if(sum1==h)
                    part++;
                if(part==i)
                    printf("1");
                else if(part!=i)
                    printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
