#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        long int pos=327000;
        int flag=0;
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0 && flag==0)
            {
                pos=i;flag=1;
            }
            else if(a[i]==0)
                c++;
            else if(a[i]==1 && i>pos)
                d++;
        }
        long long int s;
      if(c==0 && flag==0)
      s=0;
      else
       s=1100*(c+1)+100*d;
       printf("%lld\n",s);
    }
    return 0;
}
