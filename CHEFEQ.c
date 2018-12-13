#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int count[100004]={0};
        scanf("%d",&n);
        int x;
        for(int i=0;i<n;i++)
        {scanf("%d",&x);
        count[x]++;
        }
        qsort(count,100004;sizeof(int),cmp);
        printf("%d\n",count[100003]-1);
    }
    return 0;
}
