#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,x;
        scanf("%ld%ld",&x,&n);
        long long int g=((n*(n+1))/2)-x;
        if(g&1)
            {printf("impossible\n");continue;}
        int a[1000005];
        memset(a,-1,sizeof(a));
        a[x-1]=2;
        long int d,s;
        s=g/2;
        d=s;
        int check=n-1;
        int pos;
        for(int i=n-1;(i>=0 && s>=0);i--)
        {
            if(a[i]==-1 && s>i)
            {
             a[i]=1;s=s-(i+1);
             check--;
             pos=i;
            }
            else if(s==2 && x==2 || s==1 && x==1)
            {
              int j=1;
              int fl=0;
              while(i+j<n && pos>=j)
              {
                if(a[i+j]==-1 && a[pos-j]==-1)
                {
                  a[i+j]=1;
                  a[pos-j]=1;
                  a[pos]=-1;
                  s=s-(i+1);
                  check--;
                  fl=1;break;
                }
                j++;
              }
            }
        }
        for(int i=n-1;(i>=0 && d>=0);i--)
        {
            if(a[i]==-1 && d>i)
            {
                a[i]=0;d=d-(i+1);
                check--;
                pos=i;
            }
            else if((d==2 && x==2 )||d==1 && x==1)
            {
                int j=1;
                int fl=0;
              while(i+j<n && pos>=j)
              {
                if(a[i+j]==-1 && a[pos-j]==-1)
                {
                  a[i+j]=0;
                  a[pos-j]=0;
                  a[pos]=-1;
                  d=d-(i+1);
                  check--;
                  fl=1;break;
                }
                j++;
              }
            }
        }
        if(d!=0 || check!=0 || s!=0)
        {printf("impossible\n");continue;}
        else
        {
            for(int i=0;i<n;i++)
                {
                    printf("%d",a[i]);
                }
                printf("\n");
        }
    }
    return 0;
}
