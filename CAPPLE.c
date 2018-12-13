#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int b[1000000]={0};
        int y;
        int count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&y);
            if(b[y]==0)
            {
                b[y]=1;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
