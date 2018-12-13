#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    long int a[200005];
    for(int i=0;i<k;i++)
        a[i]=1;
    int pos=0;
    a[k]=k;
    for(int j=k+1;j<n;j++)
    {
        long long int y;
        y=2*a[j-1]-a[pos];
        a[j]=y%(1000000007);
        pos++;
    }
    printf("%ld",a[n-1]);
    return 0;
}
