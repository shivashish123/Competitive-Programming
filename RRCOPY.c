#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int b[100009]={0};
        int count=0;
        int a;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a);
            b[a]++;
            if(b[a]==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
