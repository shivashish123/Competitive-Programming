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
        int b[1000005]={0};
        long long int sum=0;
        for(int i=0;i<n;i++)
            {scanf("%ld",&a[i]);
            sum+=a[i];
            }
        for(int i=1;i<=n;i++)
        {
            if(i==1)
                b[i-1]=1;
            else if((sum%i)!=0)
            {
            	 b[i-1]=0;
            	 //printf("* %d\n",i);
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
                b[i-1]=0;continue;
                }
                if(sum1==h)
                    part++;

            	//printf("%d\n",part);
                if(part==i)
                    b[i-1]=1;
                else if(part!=i)
                    b[i-1]==0;
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",b[i]);
        printf("\n");
    }
    return 0;
}
