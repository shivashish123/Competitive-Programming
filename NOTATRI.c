#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    while(1)
    {
     int n;
     scanf("%d",&n);
     if(n==0)
            break;
     int a[n];
     for(int j=0;j<n;j++)
     {
      scanf("%d",&a[j]);
     }
     qsort(a,n,sizeof(int),cmp);
     int count=0;
     for(int i=n-1;i>=0;i--)
     {
            int j = i-1;
			int k=0;
			while(k<j)
			{
			    if(a[j]+a[k]<a[i])
                    {
                    count+=(j-k);
                    k++;
                    }
                else
                    j--;
			}
     }
     printf("%d\n",count);
    }
    return 0;
}
