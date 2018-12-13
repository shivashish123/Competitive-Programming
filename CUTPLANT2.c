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
        int fl=0;
        long int a[n],b[n];
        stack<long int> r;
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        int check[n];
        memset(check,0,sizeof(check));
        for(int i=0;i<n;i++)
            {scanf("%ld",&b[i]);
            if(b[i]>a[i])
                fl=1;
            if(b[i]==a[i])
                check[i]=1;
            }
        if(fl==1)
        {
            printf("-1\n");continue;
        }
        int j=0;
        int start,end;
        long int max1,min1;
        long int ans=0;
        while(j<n)
        {
            if(check[j]==0)
            {
                start=j;end=j;
                max1=b[j];
                min1=a[j];
                j++;
                while((check[j]==0 || (check[j]==1 && b[j]==max1))&& j<n)
                {
                    min1=min(min1,a[j]);
                    max1=max(max1,b[j]);
                    if(max1>min1)
                        break;
                    end++;
                    j++;
                }
                for(int l=start;l<=end;l++)
                {
                    if(r.empty() || r.top()>b[l])
                    {r.push(b[l]);
                    ans++;}
                    else
                    {
                        while((!r.empty())&& r.top()<b[l])
                            r.pop();
                        if(r.empty()|| r.top()>b[l])
                        {
                            r.push(b[l]);
                            ans++;
                        }

                    }
                }
                while(!r.empty())
                    r.pop();
            }
            else
                j++;
        }
        printf("%ld\n",ans);
    }
    return 0;
}
