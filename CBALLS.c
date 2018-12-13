#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int a[10001];
    memset(a,0,sizeof(a));
    for(int i=2;i<=10000;i++)
    {
        int j=2;
        if(a[i]==0)
        {while(i*j<=10000)
        {
            a[i*j]=1;
            j++;
        }
        }
    }
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int b[n];
        for(int i=0;i<n;i++)
            scanf("%d",&b[i]);
        long long int ans;
        long long int min1=0;
        long  int ans2=0;
        for(int i=0;i<n-1;i++)
        {
            if(b[i]>b[i+1] )
                {
                    ans2+=(b[i]-b[i+1]);
                    b[i+1]=b[i];
                }
        }
        for(int i=2;i<10000;i++)
        {
            if(a[i]==0)
            {min1=0;
            int j=0;
            while(j<n)
            {
                int c=1;
                while(b[j]==b[j+1] && j+1<n)
                {
                    c++;
                    j++;
                }
                long int h=ceil(b[j]*1.0/i*1.0);
                long int rem=h*i-b[j];
                min1+=(rem*c);
                j++;
            }
            if(i==2)
                ans=min1;
            else
                ans=min(ans,min1);
            }
        }
        ans=ans+ans2;
        printf("%ld\n",ans);
    }
    return 0;
}
