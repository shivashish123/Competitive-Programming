#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
     int n,m,k;
     scanf("%d%d%d",&n,&m,&k);
        int a[n+1];
        for(int h=0;h<=n;h++)
            a[h]=h;
        int b[m],c[k];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
            if(a[b[i]]!=0)
                a[b[i]]=0;
        }
        for(int o=0;o<k;o++)
        {
            scanf("%d",&c[i]);
            if(a[c[i]]!=0)
                a[c[i]]=0;
        }
        int c1=0,c2=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=0)
                c1++;
        }
        for(int i=0;i<m;i++)
        {
            int flag=0;
            for(int g=0;g<k;g++)
            {
                if(b[i]==c[g])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                c2++;
        }
        printf("%d %d\n",c2,c1);
    }
    return 0;
}
