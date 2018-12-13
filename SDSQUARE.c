#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[100002]={0};
    for(int i=1;i<=100000;i++)
    {
        long int j=i*i;
        int fl=1;
        int s;
        while(j>0)
        {
            s=j%10;
            if(s!=4 && s!=1 && s!=0 && s!=9)
            {
                fl=0;break;
            }
            j=j/10;
        }
        if(fl==0)
            a[i]=0;
        else
            a[i]=1;
    }
    while(t--)
    {
        long int n,m;
        scanf("%ld%ld",&n,&m);
        int count=0;
        for(int i=ceil(sqrt(n));i<=sqrt(m);i++)
        {
            if(a[i]==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
