#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int g=a[0];
        for(int i=1;i<n;i++)
            g=g|a[i];
        printf("%d\n",g);
    }
    return 0;
}
