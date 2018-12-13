#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,k;
        scanf("%ld%ld",&n,&k);
        long int a[n];
        long int h=((n*(n+1))/2)-1;
        long int f=((n*n-1)*3)/4;
        if(k>f || k<h)
        {
            printf("-1\n");continue;
        }
        long int s=n-2;
        long int r=k-h;
        long int pos=0;
        while(r>=0)
        {
            r=r-s;
            s=s-2;
            pos++;
        }
        int a[n];
        long int y=n,z=1;
        for(int i=0;i<pos*2;i++)
        {
            if(i&1)
                {a[i]=y;y--;}
            else
            {
                a[i]=z;
                z++;
            }
        }
        for(int i=pos*2;i<n;i++)
            a[i]=z++;
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
