#include<stdio.h>
long int cmp(const void *a,const void *b)
{
    return(*(long int*)a-*(long int*)b);
}
int main()
{
    long int n,m;
    scanf("%ld%ld",&n,&m);
    long int a[n];
    int f[n];
    for(int i=0;i<n;i++)
    {
        f[i]=0;
        scanf("%ld",&a[i]);
    }
    qsort(a,n,sizeof(long int),cmp);
    int count=0;
    int pos;
    int i=0;
    while(i<n-1)
    {
      if((a[i+1]-a[i])<=m)
      {i=i+2;count++;}
      else
      i++;
    }
    printf("%d",count);
    return 0;
}
