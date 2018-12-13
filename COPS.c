#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
      int a[101];
      for(int ty=0;ty<101;ty++)
      {
        a[ty]=1;
      }
     int n,x,y;
     scanf("%d%d%d",&n,&x,&y);
     int b[n];
        for(int h=0;h<n;h++)
        {
        scanf("%d",&b[h]);
        }
        for(int h=0;h<n;h++)
        {
            int o=b[h]-(x*y);
            int p=b[h]+(x*y);
            if(o<1)
            o=1;
            if(p>100)
            p=100;
            for(int l=o;l<=p;l++)
            {
                if(a[l]==1)
                    a[l]=0;
            }
        }
        int count=0;
        for(int r=1;r<=100;r++)
        {
            if(a[r]==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
