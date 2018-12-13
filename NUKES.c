#include<stdio.h>
#include<math.h>
int main()
{
    long int a,n,k;
    scanf("%ld%ld%ld",&a,&n,&k);
    int b[k];
    b[0]=a%(n+1);
    for(int h=1;h<k;h++)
        b[h]=0;
    int l=1;
    long int j=pow(n+1,l);
    while(j<a)
    {
      b[l]=(a/j)%(n+1);
      l++;
      j=pow(n+1,l);
    }
        for(int z=0;z<k;z++)
            printf("%d ",b[z]);
    return 0;
}
