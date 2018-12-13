#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char a[100005],b[100005];
    while(t--)
    {
        scanf("%s%s",a,b);
        int x=strlen(a);
        int y=strlen(b);
        int c[26],d[26];
        memset(c,-1,sizeof(c));
        memset(d,-1,sizeof(d));
        float g=(x*1.0)/2;
        float h=(y*1.0)/2;
        for(int i=0;i<x;i++)
        {
            if(c[a[i]-65]==-1)
            {
                c[a[i]-65]=i;
            }
            else
            {
                if(abs(c[a[i]-65]-g)>abs(i-g))
                c[a[i]-65]=i;
            }
        }
        for(int i=0;i<y;i++)
        {
            if(d[b[i]-65]==-1)
            {
                d[b[i]-65]=i;
            }
            else
            {
                if(abs(d[b[i]-65]-h)>abs(i-h))
                d[b[i]-65]=i;
            }
        }
        long int min=10000000;
        for(int j=0;j<26;j++)
        {
            int d1=c[j];
            int d2=y-d[j]-1;
            int d3=x-c[j]-1;
            int d4=d[j];
            long int check=abs(d1-d2)+abs(d2-d3)+abs(d3-d4)+abs(d4-d1);
            if(check<min)
                min=check;
        }
        printf("%ld\n",min);
    }
    return 0;
}
