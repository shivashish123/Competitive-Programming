#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        long int sum=0;
        for(int i=0;i<n;i++)
            {scanf("%d",&a[i]);
            sum+=a[i];
            }
        int pos=0;
        sort(a,a+n);
        while(pos<n && a[pos]<=k)
            pos++;
        if(pos==n)
        {
            cout<<sum<<endl;
            continue;
        }
        int j=n-2;
        while(a[j]>k && a[j-1]>k && j>=0)
        {
            int dif=a[j]-k;
            int l=j-1;
            int dif1=0;
            while(l>=0 && a[l]>k)
            {
                if((dif1+a[l]-k)<=dif)
                {
                    dif1+=a[l]-k;
                    a[l]=k;
                    l--;
                }
                else
                    break;
            }
            if(dif1<dif)
            {
                dif1=dif;
                a[l]=a[l]-dif+dif1;
            }
            a[j]=a[j]-dif1;
            j=l;
        }
        pos=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>k)
            {
                pos=i;break;
            }
            else if(a[i]<k)
                break;
        }
        if(pos!=-1)
        {
            a[n-1]=a[n-1]-a[pos]+k;
            a[pos]=k;
        }
        sum=0;
        for(int i=0;i<n;i++)
            {
              cout<<a[i]<<"**";
                sum+=a[i];
            }
        cout<<sum<<endl;
    }
    return 0;
}
